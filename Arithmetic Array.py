t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    s=sum(l)
    if s==n:
        print(0)
        pass
    if s<n:
        print(1)
        pass
    if s>n:
        print(s-n)
        pass
