import h5py
import glob
import pickle
import gzip

import nengo
import numpy as np
import nengo_dl
import nengo_loihi
import tensorflow as tf
import nengo_extras
import matplotlib.pyplot as plt
from sklearn.metrics import confusion_matrix
from sklearn.utils.multiclass import unique_labels
from sklearn.model_selection import train_test_split

# give paths to the dataset folder and json + h5 files
data_path = './dataset'
json_path = "model.json"
h5_path = "weights.h5"

print("loading the dataset")
# Get folder path containing text files
file_list = glob.glob(data_path + '/*.h5')
dataset = []
for file_path in file_list:
    dataset.append(file_path)
print("dataset loaded")

# preparing the dataset
target = np.array([])
features = np.array([])
for fileIN in dataset:
    # print("Appending %s" % fileIN)
    f = h5py.File(fileIN)
    myFeatures = np.array(f.get("jets")[:, [12, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 48, 52]])
    mytarget = np.array(f.get('jets')[0:, -6:-1])
    features = np.concatenate([features, myFeatures], axis=0) if features.size else myFeatures
    target = np.concatenate([target, mytarget], axis=0) if target.size else mytarget
print(target.shape, features.shape)
class_names = np.array(['g', 'q', 'w', 'z', 't'], dtype=str)

# splitting the train / test data in ratio 80:20
train_features, test_features, train_targets, test_targets = train_test_split(features, target, test_size=0.2)

# creating a train and test dataset
test_d = []
train_d = []
train_d.append(train_features)
train_d.append(train_targets)
test_d.append(test_features)
test_d.append(test_targets)

n_inputs = 16
n_outputs = 5
max_rate = 100
amplitude = 1/max_rate
presentation_time = 0.1

# model for Jet classification
with nengo.Network(label="Jet classification") as model:
    nengo_loihi.add_params(model)
    model.config[nengo.Connection].synapse = None

    model.config[nengo.Ensemble].max_rates = nengo.dists.Choice([max_rate])
    model.config[nengo.Ensemble].intercepts = nengo.dists.Choice([0])

    """ Choose a type of spiking neuron """
    neuron_type = nengo.SpikingRectifiedLinear(amplitude=amplitude)
    # neuron_type = nengo.LIF(tau_rc=0.02, tau_ref=0.001, amplitude=amplitude)
    # neuron_type = nengo.AdaptiveLIF(amplitude=amplitude)
    # neuron_type = nengo.Izhikevich()

    inp = nengo.Node(nengo.processes.PresentInput(test_d[0], presentation_time), size_out=16)

    out = nengo.Node(size_in=n_outputs)

    layer_1 = nengo.Ensemble(n_neurons=64, dimensions=1, neuron_type=neuron_type, label="Layer 1")
    model.config[layer_1].on_chip = False
    nengo.Connection(inp, layer_1.neurons, transform=nengo_dl.dists.Glorot())
    p1 = nengo.Probe(layer_1.neurons)

    layer_2 = nengo.Ensemble(n_neurons=32, dimensions=1, neuron_type=neuron_type, label="Layer 2")
    nengo.Connection(layer_1.neurons, layer_2.neurons, transform=nengo_dl.dists.Glorot())
    p2 = nengo.Probe(layer_2.neurons)

    layer_3 = nengo.Ensemble(n_neurons=32, dimensions=1, neuron_type=neuron_type, label="Layer 3")
    nengo.Connection(layer_2.neurons, layer_3.neurons, transform=nengo_dl.dists.Glorot())
    p3 = nengo.Probe(layer_3.neurons)

    nengo.Connection(layer_3.neurons, out, transform=nengo_dl.dists.Glorot())

    out_p = nengo.Probe(out)
    out_p_filt = nengo.Probe(out, synapse=nengo.Alpha(0.01))


def crossentropy(outputs, targets):
    return tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits_v2(logits=outputs, labels=targets))


def classification_error(outputs, targets):
    return 100 * tf.reduce_mean(
        tf.cast(tf.not_equal(tf.argmax(outputs[:, -1], axis=-1), tf.argmax(targets[:, -1], axis=-1)), tf.float32))


def plot_confusion_matrix(y_true, y_pred, classes, normalize=False,  title=None, cmap=plt.cm.Blues):
    # This function prints and plots the confusion matrix. Normalization can be applied by setting `normalize=True`.
    if not title:
        if normalize:
            title = 'Normalized confusion matrix'
        else:
            title = 'Confusion matrix, without normalization'

    # Compute confusion matrix
    cm = confusion_matrix(y_true, y_pred)
    # Only use the labels that appear in the data
    classes = classes[unique_labels(y_true, y_pred)]
    if normalize:
        cm = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis]
        print("Normalized confusion matrix")
    else:
        print('Confusion matrix, without normalization')

    print(cm)

    fig, ax = plt.subplots()
    im = ax.imshow(cm, interpolation='nearest', cmap=cmap)
    ax.figure.colorbar(im, ax=ax)
    ax.set(xticks=np.arange(cm.shape[1]), yticks=np.arange(cm.shape[0]), xticklabels=classes, yticklabels=classes,
           title=title, ylabel='True label', xlabel='Predicted label')

    # Rotate the tick labels and set their alignment.
    plt.setp(ax.get_xticklabels(), rotation=45, ha="right", rotation_mode="anchor")

    # Loop over data dimensions and create text annotations.
    fmt = '.2f' if normalize else 'd'
    thresh = cm.max() / 2.
    for i in range(cm.shape[0]):
        for j in range(cm.shape[1]):
            ax.text(j, i, format(cm[i, j], fmt), ha="center", va="center",
                    color="white" if cm[i, j] > thresh else "black")
    fig.tight_layout()
    return ax


dt = 0.001  # simulation timestep
step = int(presentation_time / dt)
presentation_time = 0.1  # input presentation time
train_data = {inp: train_d[0][:, None, :], out_p: train_d[1][:, None, :]}

# for the test data evaluation we will be running the network over time
# using spiking neurons, so we need to repeat the input/target data
# for a number of timesteps (based on the presentation_time)
minibatch_size = 200
test_data = {inp: np.tile(test_d[0][:minibatch_size*2, None, :], (1, step, 1)),
             out_p_filt: np.tile(test_d[1][:minibatch_size*2, None, :], (1, step, 1))}


do_training = True
with nengo_dl.Simulator(model, minibatch_size=minibatch_size, seed=0) as sim:
    if do_training:
        output = {out_p_filt: classification_error}
        loss = sim.loss(test_data, output)
        print("error before training: %.2f%%" % loss)
        # run training
        sim.train(train_data, tf.train.RMSPropOptimizer(learning_rate=0.001),
                  objective={out_p: crossentropy}, n_epochs=50)
        print("error after training: %.2f%%" % sim.loss(test_data, {out_p_filt: classification_error}))
        sim.save_params("./jet_params")
    else:
        print("error before training: %.2f%%" % sim.loss(test_data, {out_p_filt: classification_error}))
        sim.load_params("./model_files/jet_file.ckpt")
        print("parameters loaded")
        print("error after training: %.2f%%" % sim.loss(test_data, {out_p_filt: classification_error}))

    sim.run_steps(int(presentation_time / dt), data={inp: test_data[inp][:minibatch_size]})

    for i in range(51, 52):
        plt.plot(sim.trange(), sim.data[out_p_filt][i])
    plt.legend(['g', 'q', 'w', 'z', 't'], loc='best');
    plt.title('Output activity of spiking neurons')
    plt.xlabel('time')
    plt.ylabel('spike values')
    plt.show()

    sim.freeze_params(model)

for conn in model.all_connections:
    conn.synapse = 0.005

if do_training:
    with nengo_dl.Simulator(model, minibatch_size=minibatch_size) as sim:
        print("error w/ synapse: %.2f%%" % sim.loss(test_data, {out_p_filt: classification_error}))

n_presentations = 50
with nengo_loihi.Simulator(model, dt=dt, precompute=False) as sim:
    # if running on Loihi, increase the max input spikes per step
    if 'loihi' in sim.sims:
        sim.sims['loihi'].snip_max_spikes_per_step = 120

    # run the simulation on Loihi
    sim.run(n_presentations * presentation_time)

    # check classification error
    step = int(presentation_time / dt)
    output = sim.data[out_p_filt][step - 1::step]

    error_percentage = 100 * (np.mean(np.argmax(output, axis=-1) !=
                             np.argmax(test_data[out_p_filt][:n_presentations, -1], axis=-1)))

    predicted = np.argmax(output, axis=-1)
    correct = np.argmax(test_data[out_p_filt][:n_presentations, -1], axis=-1)

    predicted = np.array(predicted, dtype=int)
    correct = np.array(correct, dtype=int)

    print("Predicted labels: ", predicted)
    print("Correct labels: ", correct)
    print("loihi error: %.2f%%" % error_percentage)

    np.set_printoptions(precision=2)

    # Plot non-normalized confusion matrix
    plot_confusion_matrix(correct, predicted, classes=class_names,
                          title='Confusion matrix, without normalization')

    # Plot normalized confusion matrix
    plot_confusion_matrix(correct, predicted, classes=class_names, normalize=True,
                          title='Normalized confusion matrix')

    plt.show()