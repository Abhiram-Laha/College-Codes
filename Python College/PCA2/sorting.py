arr=[5,2,3,8,7,4,6,1,9]
l=len(arr)

'''
                            BUBBLE SORT
for i in range(0,l-1):
    for j in range(0,l-1):
        if(arr[j+1]<arr[j]):
            arr[j+1],arr[j]=arr[j],arr[j+1]
            
'''

#                           SELECTION SORT
for i in range(0,l-1):
    min=i
    for j in range(i+1,l-1):
        if(arr[min]>arr[j]):
            min=j
        
        arr[i],arr[min]=arr[min],arr[i]
    print(arr)
        
'''
for i in range(0,l-1):
    for j in range(i+1,l-1):
        if(arr[i]>arr[j]):
            arr[i],arr[j]=arr[j],arr[i]
    print(arr)
    
'''

arr.sort()
            
print(arr)
