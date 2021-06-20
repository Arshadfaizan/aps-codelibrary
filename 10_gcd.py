def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)
a=1
b=5
print(gcd(a,b))
