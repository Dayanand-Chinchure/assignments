a=[[1,2,3],[4,5,6],[7,8,9]]
n=len(a)
flag=0

def check(a,i,j,flag):
    if i==3 | j==3:
        return 1

    if flag ==0:
        print a[i][j],

    check(a,i,j+1,flag)
    j=0
    check(a,i+1,j,flag)
    flag=1

check(a,0,0,flag)


