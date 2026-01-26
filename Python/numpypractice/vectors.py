import numpy as np

A = np.array([[2, 1], [1, -1]])
B = np.array([5, 1])
x = np.linalg.solve(A, B)

print(x)