def checkPrime(n):
    if n<=1:
        return False
    if n <= 3 : 
        return True
    if n%2 == 0: 
        return False
    asd = 3
    while asd*asd <= n:
        if n%asd == 0:
            return False
        asd += 2
    return True

def query(L,R):
    p = 0
    for n in range(L,R+1):
        if checkPrime(n):
            p = n
            #print("p",p)
            break
    if p == 0:
        return -1
    for i in range(R,p,-1):
        if checkPrime(i):
            #print("i",i)
            return i - p
    return 0
t=int(input())
for _ in range(t):
    L,R=map(int,input().split())
    s=query(L,R)
    print(s)
