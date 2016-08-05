a=[1,1,2,2,2,2,32,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
b=2

def count_occurence(a,n,b):
    temp=0
    for i in range(0,n):
        if a[i] == b:
            temp=temp+1

    print temp

count_occurence(a,len(a),b)
