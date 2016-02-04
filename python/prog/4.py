from types import *

a="1"
print len(a)
def what(x):
	if type(x)==int:
		print "Integer"
	else:
		print "Something else"
	
what(4)
what("4")
