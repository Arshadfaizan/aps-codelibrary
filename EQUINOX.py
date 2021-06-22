n=int(input())
if n>=1 and n<=100:
    for _ in range(n):

        m,A,B=list(map(int,input().split()))
        ct1=0
        ct2=0
        for i in range(m):
            st=input()
            if st[0] in 'EQUINOX':
                ct1+=A
            else:
                ct2+=B
        if ct1==ct2:
            print("DRAW")
        elif ct1>ct2:
            print("SARTHAK")
        else:
            print("ANURADHA")
            #print(A,B)   
