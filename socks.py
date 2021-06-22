ars=list(map(int,input().split()[:6]) )
# for i in range(3):
#     if (not ars[i]<=10 and ars[i]>=1):
#         flag=1
# if flag==0:
# a=int(input())
# b=int(input())
# c=int(input())
# if a==b or b==c or a==c:
#     print("YES")
# else:
#     print("NO")
if ars[0]==ars[1] or ars[1]==ars[2] or ars[2]==ars[0]:
    print("YES")
else:
    print("NO")
