a=[1, -2, -3, 0, 7, -8, -2]

def max(a,b):
    if(a>b):
        return a
    else:
        return b

def check(a):
    maxproduct=a[0] 
    productsofar=a[0]

    if(productsofar == 0):
            productsofar = 1

    for i in range(1,len(a)):
        productsofar=productsofar*a[i]
        maxproduct=max(maxproduct,productsofar)
        if (productsofar == 0):
            productsofar =1 
    
    return maxproduct

print check(a)


