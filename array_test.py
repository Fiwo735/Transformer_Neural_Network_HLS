import numpy as np

# x = np.empty((2, 3))

# x0 = np.array([1, 2, 3])
# x0 = np.expand_dims(x0, axis=0)

# x[0] = x0

# print(x)
i = 255
condition = (i + 1) % 128 != 0
print(f"condition: {condition}")
print(f"{i % 128}")