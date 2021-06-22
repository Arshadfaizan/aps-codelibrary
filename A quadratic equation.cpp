def k(a,d,x) :
  k= (x-a)/d +1
  if k.is_integer() :  return int(k)
  else : return int(k+1)
def small(a,d,x) :
  k = (x-a)/d +1
  return int(k)
T = int(input())
for test in range (T) :
  L,R = map(int, input().split())
  cnt = 0
  for i in range (1,int(pow(R,1/2))+1) :
    p = i*i
    m = 0
    m1 = 0
    if L >= p : m = k(p, 2*i, L)
    if R >=p : m1 = small(p, 2*i, R)
    else : break
    cnt = cnt + (m1-m)
    if m!=0 : cnt +=1
  print(cnt)
