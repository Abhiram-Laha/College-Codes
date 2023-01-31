a=10
b=20
c=10

if(a+b>c or a+c>b or b+c>a):
    if(a==b==c):
        print("Equilateral")
    elif(a==b or b==c or a==c):
        print("Isoceles")
    else:
        print("Scalene")