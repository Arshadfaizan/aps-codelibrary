import math
# Write your code here
def div(a,b) :
    if(b==0):
        return a;
    return div(b,a%b)  
# def conv(arr,n):
#     for i in range(n):
#         for j in range(n):
#             if(arr[i]%arr[j]==0):
def maxGcd(arr,n,aqr):
    maxgcd=0
    a=0
    b=0
    for i in range(2*n):
        for j in range(2*n):
            val=div(arr[i],arr[j])
            # print("va",arr[i],arr[j])
            if(val>maxgcd):
                if(i!=j):
                    maxgcd=val
                    a=i
                    b=j
                    # print("val",arr[i],arr[j])
                    # print("max",maxgcd)
                            
    return [maxgcd,a,b]
 
 
arr=[]
ars=[]
aqr=[]
aqr1=[]
cnt=1
a=0
b=0
sum1=0
flag=0
n=int(input())
q=n
arr=list(map(int,input().split()))
for i in range(2*n):
    if(arr[i]>=10**9 or arr[i]<=1):
        flag==1
if n<=10 and n>=1:
    if(flag!=1):
        while(n!=0):
             # print("arr",arr)
            aqr1=maxGcd(arr,n,aqr)
        # print(aqr)
    # print(aqr[0])
            arr.remove(arr[aqr1[1]])
            arr.remove(arr[aqr1[2]-1])
            z=aqr1[0]
            ars.append(z)
            n=n-1
            aqr=[0,0,0]
        ars.sort()   
    # print("ars",ars)
        for k in range(q):
            sum1=sum1+ars[k]*cnt
            cnt=cnt+1 
    # print(sum1)  
        print(sum1)
