n=12345
rem=0
s=0

while(n>0):
    rem=n%10
    s=s+rem
    n=n//10

print(s)