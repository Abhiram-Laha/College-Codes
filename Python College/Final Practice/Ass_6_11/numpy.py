import numpy as np

#! Create a 3D Numpy Array and Print it

arr = np.array([[1,2,3],[2,6,4],[1,9,6]])

print(arr)
print(type(arr))



#! Sort a given 2D numpy array

arr = np.array([[1,4,7,9,5],[1,7,8,1,2]])

print(np.sort(arr))



#! Add two Numpy array together

arr1 = np.array([5,1,3,4,8,6])
arr2 = np.array([1,2,3,4,5,6])

new = arr1+arr2
new=np.add(arr1,arr2)

print(new)



#! Power to the first array to second array

arr1 = np.array([2,2,2,2,2,2,2])
arr2 = np.array([1,2,3,4,5,6,7])

new = np.power(arr1,arr2)

print(f"Power : {new}")

#! Find LCM and HCF of given two Numbers

lcm = np.lcm(25,125)

hcf = np.gcd(25,125)

print(f"LCM : {lcm}\nHCF : {hcf}")
