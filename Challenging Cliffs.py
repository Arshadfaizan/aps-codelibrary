t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    arr=[]
    s=l[1]-l[0]
    e=l[n-1]-l[n-2]
    d=min(s,e)
    tem=-1
    for i in range(1,n-1):
        if l[i+1]-l[i]<d:
            d=l[i+1]-l[i]
            tem=i

    if tem==-1:
        if s<e:
            arr.append(l[0])
            for i in range(2,n):
                arr.append(l[i])
            arr.append(l[1])
        else:
            arr.append(l[n-2])
            for i in range(0,n):
                if i!=n-2:
                    arr.append(l[i])
    else:
        arr.append(l[tem])
        for i in range(tem+2,n):
            arr.append(l[i])
        for i in range(tem):
            arr.append(l[i])
        arr.append(l[tem+1])
    print(*arr)
