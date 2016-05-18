import sys
a=sys.argv[1]
b=sys.argv[2]

c=open(a,'r+')
d=open(b,'r+')

for i in c:
    d.write(i)

str="Dayanand Chinchure PUCSD abc"
ss=str.split('a')
print ss
