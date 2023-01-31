n=5
a=0
b=0
s=1
x=0
print(a,b,end=' ')

for i in range(0,n-2):
    
    
    a=b
    b=s
    x=x+s
    s=a+b
    
    print(s,end=' ')
    
    
    

print("\nSum : ",x)