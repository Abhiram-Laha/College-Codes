# FILE HANDLING

#! Read a Text File and count number of Lines

file = open("text.txt",'r')

c=0
for i in file:
    print(i,end='')
    if(i!="\n"):
        c=c+1

print(f"\nTotal Lines : {c}")


#! Copy one file content to another file

file1 = open("text.txt",'r')
file2 = open("copy.txt",'w+')

for i in file1:
    file2.write(i)

file2 = open("copy.txt",'r')
print("\nCopied File : \n",file2.read())