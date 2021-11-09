import nengo
import nengo_dl
import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

import model.data as data

# Constants
MAX_RATES = 100
INTERCEPTS = 0


# (1) Data
dataset = data.get_dataset()
images, labels = zip(
    *[(dataset[i].jetImage, dataset[i].target) for i in range(1000)]
)

train_images = np.array(images[:800]).reshape((len(labels[:800]), -1))
train_labels = np.array(labels[:800]).reshape(-1)
test_images = np.array(images[800:]).reshape((len(labels[800:]), -1))
test_labels = np.array(labels[800:]).reshape(-1)

# (2) Model
with nengo.Network(seed=0) as net:
    # Neuron settings
    net.config[nengo.Ensemble].max_rates = nengo.dists.Choice([MAX_RATES])
    net.config[nengo.Ensemble].intercepts = nengo.dists.Choice([INTERCEPTS])
    net.config[nengo.Connection].synapse = None
    neuron_type = nengo.LIF(amplitude=0.01)

    # Optimization (improve training speed)
    nengo_dl.configure_settings(stateful=False)

    # the input node that will be used to feed in input images
    inp = nengo.Node(np.zeros(100 * 100))

    # add the first convolutional layer
    x = nengo_dl.Layer(tf.keras.layers.Conv2D(filters=32, kernel_size=3))(
        inp, shape_in=(100, 100, 1)
    )
    x = nengo_dl.Layer(neuron_type)(x)

    # add the second convolutional layer
    x = nengo_dl.Layer(tf.keras.layers.Conv2D(filters=64, strides=2, kernel_size=3))(
        x, shape_in=(98, 98, 32)
    )
    x = nengo_dl.Layer(neuron_type)(x)

    # add the third convolutional layer
    x = nengo_dl.Layer(tf.keras.layers.Conv2D(filters=128, strides=2, kernel_size=3))(
        x, shape_in=(48, 48, 64)
    )
    x = nengo_dl.Layer(neuron_type)(x)

    # add the fourth convolutional layer
    x = nengo_dl.Layer(tf.keras.layers.Conv2D(filters=256, strides=2, kernel_size=3))(
        x, shape_in=(23, 23, 128)
    )
    x = nengo_dl.Layer(neuron_type)(x)

    # linear readout
    out = nengo_dl.Layer(tf.keras.layers.Dense(units=5))(x)

    # probes: monitor model poutput
    out_p = nengo.Probe(out, label="out_p")
    out_p_filt = nengo.Probe(out, synapse=0.1, label="out_p_filt")


# (3) Training
minibatch_size = 10
sim = nengo_dl.Simulator(net, minibatch_size=minibatch_size)

# add single timestep to training data
train_images = train_images[:, None, :]
train_labels = train_labels[:, None, None]

# when testing our network with spiking neurons we will need to run it
# over time, so we repeat the input/target data for a number of
# timesteps.
n_steps = 10
test_images = np.tile(test_images[:, None, :], (1, n_steps, 1))
test_labels = np.tile(test_labels[:, None, None], (1, n_steps, 1))


def classification_accuracy(y_true, y_pred):
    return tf.metrics.sparse_categorical_accuracy(y_true[:, -1], y_pred[:, -1])


# note that we use `out_p_filt` when testing (to reduce the spike noise)
sim.compile(loss={out_p_filt: classification_accuracy})
print(
    "Accuracy before training:",
    sim.evaluate(test_images, {out_p_filt: test_labels}, verbose=0)["loss"],
)

do_training = True
if do_training:
    # run training
    sim.compile(
        optimizer=tf.optimizers.RMSprop(0.001),
        loss={out_p: tf.losses.SparseCategoricalCrossentropy(from_logits=True)},
    )
    sim.fit(train_images, {out_p: train_labels}, epochs=10)

    # save the parameters to file
    sim.save_params("./mnist_params")
else:
    # download pretrained weights
    # urlretrieve(
    #     "https://drive.google.com/uc?export=download&"
    #     "id=1l5aivQljFoXzPP5JVccdFXbOYRv3BCJR",
    #     "mnist_params.npz",
    # )

    # load parameters
    sim.load_params("./mnist_params")

sim.compile(loss={out_p_filt: classification_accuracy})
print(
    "Accuracy after training:",
    sim.evaluate(test_images, {out_p_filt: test_labels}, verbose=0)["loss"],
)

data = sim.predict(test_images[:minibatch_size])

for i in range(5):
    plt.figure(figsize=(8, 4))
    plt.subplot(1, 2, 1)
    plt.imshow(test_images[i, 0].reshape((100, 100)), cmap="gray")
    plt.axis("off")

    plt.subplot(1, 2, 2)
    plt.plot(tf.nn.softmax(data[out_p_filt][i]))
    plt.legend([str(i) for i in range(10)], loc="upper left")
    plt.xlabel("timesteps")
    plt.ylabel("probability")
    plt.tight_layout()

plt.show()
sim.close()