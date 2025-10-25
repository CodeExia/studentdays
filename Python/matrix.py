import numpy as np


x = np.array([2,3],
            [1,2])
y = np.array([1,-1,0])
z = np.linalg.det(x)

print(z)
