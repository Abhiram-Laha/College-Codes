s="abhiram is good boy"

print(s[::-1])

print(s.count('a'))
l=['a','e','i','o','u']

for i in s:
    if(i not in l):
        print(i,end='')
        
if 'good' in s:
    print("\nPresent")