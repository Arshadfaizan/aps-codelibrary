def KthSmallest(N, A, Q, Queries):
    arr=[]
    for i in range(N):
        #arr.append(A[i])
        ele=0
        for j in range(i,N):
            ele=ele|A[i]|A[j]
            arr.append(ele)
 
    #print(arr)
    arr.sort()
    ars=[]
    #print(r[2])
    #1 2 3 4 6 7
    for i in range(Q):
        x=Queries[i]
        #print(r[x-1])
        ars.append(arr[x-1])
    return ars
    pass
T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    Q = int(input())
    Queries = list(map(int, input().split()))
    out_= KthSmallest(N, A, Q, Queries) 
    print (' '.join(map(str, out_))
