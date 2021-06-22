n=int(input())
for _ in range(n):
    x,a,b=map(int,input().split())
    if x>=31 and x<=40 and a>=101 and a<=120 and b>=1 and b<=5:
        res=a+(100-x)*b
        res=res*10
        print(res)
