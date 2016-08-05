a=[[10,20,30,40],[15,25,35,45],[27,29,37,48],[32,33,39,50]]
b=32

def check(a,m,n,b):
    if (m < 0 | m > 3):
        print "No"
        return

    if (a[m][n] == b):
        print m,n
        print "Yes Exist !"
        return

    if (a[m][n] > b):
        check(a,m,n-1,b)
    else:
        check(a,m+1,n,b)

check(a,0,len(a)-1,b)
