t=int(input())
for i in range(t):
    n=int(input())
    if n%4==1:
        print("1 1")
    elif n%4==2:
        print("2 "+str(n)+" 1")
    elif n%4==3:
        print(0)
    elif n%4==0:
        print("1 "+str(n))
