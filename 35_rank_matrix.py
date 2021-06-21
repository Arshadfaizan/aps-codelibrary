import numpy as np
ar=[]
for i in range(3):
    row=[]
    for j in range(3):
        ele=int(input( ))
        row.append(ele)
    ar.append(row)

print(ar)
ar2=np.linalg.matrix_rank(ar)
print("The rank of the matrix:\n")
print(ar2)
