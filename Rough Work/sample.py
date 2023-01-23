def primes_between(m, n):
    primes = []
    for num in range(m, n + 1):
        if num > 1:
            for i in range(2, num):
                if (num % i) == 0:
                    break
            else:
                primes.append(num)
    return primes

def factors(n):
    return [i for i in range(1, n+1) if n % i == 0]

m=int(input())
n=int(input())

s=sum(primes_between(m,n))

ans=factors(s)

for i in range(len(ans)):
    print(ans[i],end=' ')
