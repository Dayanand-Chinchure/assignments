food_item=["Milk","Pills","Dippers"]

f=open('ip','r')

def check_tax(f,a):
	if f in food_item:
		print a*a
	else:
		print 'NO'

for line in f:
	b=line.split()
	res=check_tax(b[1],float(b[len(b)-1]))

