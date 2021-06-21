def fix(string):
    s = set()
    list = []
    cnt=0
    ars=[]
    cvg=[]
    for ch in string:
        if ch not in s:
            s.add(ch)
            list.append(ch)
            if cnt!=0:
                ars.append(cnt)
                cnt=0
        else:
            cnt=cnt+1
    if ars :    
        cvg.append(min(ars))
    else:
        cvg.append(0)
    x=''.join(list)
    cvg.append(str(x))
    return cvg
def findShortestSubstring(s):
    # Write your code here
    s=s.lower()
    str=len(s)
    ars=[]
    ars=fix(s)
    if str>=26:
        z=min(ars[0],len(ars[1]))
    z=len(ars[1])
    return str-z
s="xabbcacpqr"
