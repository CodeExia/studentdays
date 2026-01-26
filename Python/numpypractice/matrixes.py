import numpy as np
from sympy import Matrix

x = np.array([(1,1,-1,7),
            (1,-1,2,3),
            (2,1,1,9)])

y = np.array([1,2,3])

z = Matrix(x)
v
rref_form, pivot_columns = z.rref()


print(x)
print(z.rref())