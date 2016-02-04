a=[[1,2],[3,4]]
b=[[1,2],[3,4]]
j=0
c=[[[],[]],[[],[]]]

for i in range(0,2):
	for j in range(0,2):
		c[i][j]=a[i][j]+b[i][j]


print c

