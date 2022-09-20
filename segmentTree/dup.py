def Transpose(mat):
    n=len(mat)
    for i in range(n):
        for j in range(i):
            mat[i][j],mat[j][i]=mat[j][i],mat[i][j]
    for ls in mat:
        ls.reverse()
    return mat



    n=len(mat)
    for i in range(n):
        for j in range(i+1):
            mat[i][j],mat[j][i]=mat[j][i],mat[i][j]
    return mat
