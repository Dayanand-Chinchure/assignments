f=open('ip','r')
ads=0
for line in f:
	a=line.split()
	b=int(a[1])
	ads=ads+b

print ads

