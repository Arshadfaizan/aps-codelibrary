t=int(input())
for _ in range(t):
    n=int(input())
    x=2
    res=1
    n=n-1
    while(n>0):
        if(n&1):
            res=(res*x)%1000000007
        n=n>>1
        x=(x*x)%1000000007
    print(res)
