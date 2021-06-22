mod=1000000007
n=int(input())
ct=0
a=list(map(int,input().split()))
for i in a:
    ct=(ct+i+mod)%mod
s=int(input())    
for q in range(s):
    ct=(2*ct)%mod
    print(ct)
