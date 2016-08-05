a=[2,3,3,2,5]

def find_frequncy(a,n):
    temp=0
    for i in range(0,n):
        if a[i]>temp:
            temp=a[i]

    b=[0]*(temp+1)
    for i in range(0,n):
        b[a[i]]=b[a[i]]+1

    for i in range(1,len(b)):
        print i,b[i]

find_frequncy(a,len(a))
