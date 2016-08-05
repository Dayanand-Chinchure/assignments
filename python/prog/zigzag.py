a=[4,3,7,8,6,2,1]

def zigzag(a,n):
    flag=0
    for i in range(0,n-2):
        if flag==0:
            if (a[i]>a[i+1]):
                temp=a[i+1]
                a[i+1]=a[i]
                a[i]=temp
        else:
            if (a[i] < a[i+1]):
                temp=a[i+1]
                a[i+1]=a[i]
                a[i]=temp
        
        if flag ==0:
            flag =1
        else:
            if flag ==1:
                flag =0
    print a

zigzag(a,len(a))

                

