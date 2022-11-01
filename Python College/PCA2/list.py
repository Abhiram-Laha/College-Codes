val=[]
i=0
while(i<5):
    m=int(input("Enter : "))
    val.append(m)
    i=i+1

n=int(input("Enter Value to Search : "))

if(n in val):
    print("Present")
else:
    print("Not Present")