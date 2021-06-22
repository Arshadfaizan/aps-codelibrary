n=int(input())
for _ in range(n):
    ars=list(map(float,input().split()))
    yoru=ars[0]*ars[1]*ars[2]*ars[3]
    yoru=100/yoru
    if round(yoru,2)<9.58:
        print("YES")
    else:
        print("NO")
    ars.clear()
