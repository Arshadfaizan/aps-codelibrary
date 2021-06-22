
t = int(input())


def main():
    waste,k = input().split()
    k = int(k)
    string = input()
    count = 0
    flag = 0
    for i in range(0,len(string)):
        if string[i]=="*":
            count+=1
            if count==k:
                flag = 1
        else:
            count=0
                
    if flag==1:
        print("YES")
    else:
        print("NO")
    
    
for _ in range(t):
    main()
    
