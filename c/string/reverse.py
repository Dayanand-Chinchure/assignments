f=open('ip','r')

b=[]

#b=[i.split(" ")[0] for i in a]
for i in f:
	b.append((i.split(" ")[2]))
	print b
