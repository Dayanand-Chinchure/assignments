a=[1,2,3,4,5]
n=5
c='abcd'
b=len(c)

def fun(i):
	if i==4:
		return
	else:
		print c[i];
		fun(i+1)
	

fun(0)
print c



