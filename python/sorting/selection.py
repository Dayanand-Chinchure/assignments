a=[2,7,4,1,6,3]
b=[0]*len(a)

for i in range(0,len(a)):
    for j in range(i+1,len(a)):
        if (a[i]>a[j]):
            b[i]=a[j]
            
            temp=a[i]
            a[i]=a[j]
            a[j]=temp

print b
