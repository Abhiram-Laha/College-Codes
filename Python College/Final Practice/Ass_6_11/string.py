string = "Abhiram Laha"

#! Reverse a String

def reverse(x):
    return x[::-1]

print(reverse(string))



#! Acces using Negative Index

print(string[-3])
print(string[2:-6])



#! Count Digits and Special Characters

sam="abc 12 *&59@@"
d,a,s=0,0,0
for i in sam:
    if(i.isdigit()):
        d=d+1
    if(i.isalpha()):
        a=a+1
    if(i==' '):
        s=s+1
    
    
print("Digits : ",d)
print("Alpabhets : ",a)
print("Special Charcters : ",len(sam)-d-a-s)
print("Spaces: ",s)


#! To count a substring repeatition in a string

sample = "kjdhkasgkatree hduadguatree idhkagdsktree scdhzjasfchjtree"
key="tree"

c=sample.count(key)
print("Total Count : ",c)


#! Remove all vowels from the String

sample="Abhiram is good boy, you know!!"
vowels="aieouAIEOU"

for i in vowels:
    sample=sample.replace(i,"")
    
print("After Removing Vowels : ",sample)
    
    
#! Search a Charcter in a string

sample="Abhiram is good boy, you know!!"
key="b"

m=sample.find(key)
print(f"Found {key} in {sample} at index {m}.")


#! Print last 3 charcter of a string

sample="Abhiram"

print(sample[-3:])



