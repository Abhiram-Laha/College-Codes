import numpy as np
a=10
b=5
c=9

d=b**2+4*a*c

if(d<0):
    print("Imaginery")
elif(d==0):
    print('Same')
    print((-b+np.sqrt(d))/2*a)
else:
    print("Real")
    print((+b+np.sqrt(d))/2*a)
    print((-b+np.sqrt(d))/2*a)