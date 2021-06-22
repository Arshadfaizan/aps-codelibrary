t=int(input())
for _ in range(t):
    cnt=1
    arr=list(map(str,input().split()))
    for i in range(1,len(arr)):
        if(arr[i].islower()):
            #print(arr[i])
            for x in arr[i]:
                #print(ord(x))
                if(ord(x)<97 or ord(x)>109 ):
                    cnt=0
                    #print("NO")
                    break
           
        elif(arr[i].isupper()):
            #print(arr[i])
            for x in arr[i]:
                #print(ord(x))
                if(ord(x)<78 or ord(x)>90):
                   # print("NO")
                    cnt=0
                    break
           
        else:
            cnt=0
            break
    if(cnt==1):
        print("YES")
    else:
        print("NO"
