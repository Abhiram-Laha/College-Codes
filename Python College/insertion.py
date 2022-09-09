arr=[2,6,4,5,8,9,6,4,3,4,1,0,7]

print("List before Sorting : ",arr)

l=len(arr)

for i in range(1,l):
    key=arr[i]
    j=i-1
    while key<arr[j] and j>=0:
        arr[j+1]=arr[j]
        j=j-1
    arr[j+1]=key

print("List after Insertion Sort : ",arr)

