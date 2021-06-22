
def mat(ars ):
    cntx=0
    cnto=0
    cnx=0
    cno=0
    cn_=0
    if ars[0][0]=='X' and ars[0][1]=='X' and ars[0][2]=='X':
        cntx=3
    if ars[1][0]=='X' and ars[1][1]=='X' and ars[1][2]=='X' :
        cntx=3
    if ars[2][0]=='X' and ars[2][1]=='X' and ars[2][2]=='X' :
        cntx=3
    if ars[0][1]=='X' and ars[1][1]=='X' and ars[2][1]=='X'  :
        cntx=3
    if ars[0][0]=='X' and ars[1][0]=='X' and ars[2][0]=='X' :
        cntx=3
    if ars[0][2]=='X' and ars[1][2]=='X' and ars[2][2]=='X' :
        cntx=3
    if ars[0][0]=='O' and ars[0][1]=='O' and ars[0][2]=='O':
        cnto=3
    if ars[1][0]=='O' and ars[1][1]=='O' and ars[1][2]=='O' :
        cnto=3
    if ars[2][0]=='O' and ars[2][1]=='O' and ars[2][2]=='O' :
        cnto=3
    if ars[0][1]=='O' and ars[1][1]=='O' and ars[2][1]=='O'  :
        cnto=3
    if ars[0][0]=='O' and ars[1][0]=='O' and ars[2][0]=='O' :
        cnto=3
    if ars[0][2]=='O' and ars[1][2]=='O' and ars[2][2]=='O' :
        cnto=3
    if ars[0][0]=='X' and ars[1][1]=='X' and ars[2][2]=='X':
        cntx=3
    if ars[0][0]=='O' and ars[1][1]=='O' and ars[2][2]=='O':
        cnto=3
    if ars[0][2]=='X' and ars[1][1]=='X' and ars[2][0]=='X':
        cntx=3
    if ars[0][2]=='O' and ars[1][1]=='O' and ars[2][0]=='O':
        cnto=3
    for i in range(3):
        for j in range(3):
            if ars[i][j]=='X':
                cnx+=1
            if ars[i][j]=='O':
                cno+=1
            if ars[i][j]=='_':
                cn_+=1
    #print(cntx,cnto,cnx,cno,cn_)
    if (cntx==3  and cnto==3 ) or(cnx-cno<0 )  or (cnx-cno>1):
        return 3
    if (cnx==0) and (cno==0) and (cn_==9):
        return 2
    if(cntx==3   ) and (cnto==0  ) and (cnx>cno):
        return 1
    if(cntx==0  ) and (cnto==3 ) and (cnx==cno):
        return 1
    if(cntx==0)   and (cnto==0 ) and (cn_==0):
        return 1
    if(cntx==0 )  and (cnto==0  ) and (cn_>0):
        return 2
    else:
        return 3
        
        
        
t=int(input())
for _ in range(t):
    ars=[]
    for i in range(3):
        row=list(map(str,input()))
        ars.append(row)
    ar=mat(ars)
    #print(ars)
    print(ar)
            
            
    
