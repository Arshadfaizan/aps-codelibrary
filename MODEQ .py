t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    ars=[1]*(n+1)
    cnt=0
    for i in range(2,n+1):
        s=m%i
        cnt =cnt+ars[s]
        for j in range(s,n+1,i):
            ars[j]=ars[j]+1
    print(cnt)
