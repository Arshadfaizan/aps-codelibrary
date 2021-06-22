n=int(input())
for _ in range(n):
    flag=0
    n,x,k=map(int,input().split())
    if x%k==0:
        #flag=1
        print("YES")
    elif(n+1-x)%k ==0:
        #flag=1
        print("YES")
    else:
        print("NO")
