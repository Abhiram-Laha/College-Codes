import numpy as np

#! Find determinant of a Matrix

arr = np.array([[1,2],[3,4]])

d = np.linalg.det(arr)

print(d)


#! Find Eigene Value and Eigen Vector

arr = np.array([[1,6],[7,3]])

w,v=np.linalg.eig(arr)

print(f"Eigen Value : {w}\nEigen Vector : {v}")