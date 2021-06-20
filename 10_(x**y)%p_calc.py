def power(x, y):
    res = 1   
    while (y > 0):
        if ((y & 1) != 0):
            res = res * x
        y = y >> 1 # y = y/2
        x = x * x 
    return res
 
x=2
y=5
print(power(x,y))
