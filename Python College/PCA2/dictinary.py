dk={1:"A",2:'B',3:'C',4:'D',5:'E',6:'F',7:'G'}

print("Keys : ",dk.keys())        # key access
print("Values : ",dk.values())    # value access

dk[2]='X'   #change

dk.pop(3)    # delete particular
dk.popitem()  # last inserted

new=dk.copy()   # copy whole dick

print("Original : ",dk)
print("Copied : ",new)

mk={1:87,2:54,3:21,4:32}

sum=0


for i in mk:
    sum=sum+i+mk[i]
    k={1:sum}
    
print(k)
    
    
print(type(mk))
    