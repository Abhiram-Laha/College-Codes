#? TUPLE -> IMMUTABLE

#! Take 4 city name and check weather "kolkata" is present or not

#city=tuple(input("Enter City with Space : ").split())

city=("delhi","kolkata","mumbai")
print(city)

key="kolkata"

if key in city:
    print("Present")
else:
    print("Not Present")
    
    
#! Change the 2nd element from a Tuple

sp=("pop","push",5,7.25,"get")
print(f"Before Change : {sp}")

sp=list(sp)
sp[1]="snake"

sp=tuple(sp)

print(f"After Change : {sp}")



#! Append a element in a Tuple

sp=("pop","push",5,7.25,"get")

m="hello"

sp=list(sp)
sp.append(m)

sp=tuple(sp)
print(sp)



#! Remove a element from the tuple

sample=('pop', 'push', 5, 7.25, 'get', 'hello')

sample=list(sample)

sample.remove("push")

print(tuple(sample))



#! Delete the whole Tuple

es=('pop', 'push', 5, 7.25)

del es

#print(es)


#! Add two tuples together 

a=(12,56,4,6,1,80,90)
b=('pop', 'push', 5, 7.25, 'get', 'hello') 

a=a+b

print(a)


#! Unpacking of Tuple

t=('pop', 'push', 5, 7.25, 'get', 'hello')

a,b,*c,d=t

print(f"a : {a}\nb : {b}\nc : {c}\nd: {d}")



#! Sum all integer in the Tuple

a=('pop', 'push', 5, 5, 'get', 'hello',10,15,3)

a=list(a)
sum=0

for i in a:
    if(str(i).isdigit()):
        sum=sum+i
print("Sum : ",sum)