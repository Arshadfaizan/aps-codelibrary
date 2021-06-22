t=int(input())
for _ in range(t):
    cnt=0
    a,b,c,d,k=map(int,input().split())
    ars=max(a,c)-min(a,c)
    ars=ars+(max(b,d)-min(b,d))
    if(ars>k):
        cnt=1
        
    if(ars<k):
        if (k-ars)%2==0:
            cnt=0
           
        else:
           cnt=1
           
    if cnt==1:
        print("NO")
    else:
        print("Yes")
