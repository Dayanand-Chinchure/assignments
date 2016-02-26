#(define (fact n) (if (= n 1) 1 (* n (fact (- n 1)))))
def fact(n):
	if n==1: return 1
	else : return n * fact(n - 1)

a=['Dayanand', 'list', 'gen','voice','black']
b='black'
if b in a: print "yes"
else: print "No"

def exte(val,list=[]):
	list.append(val)
	return list

#print exte(5)
#print exte(10,[])
#print exte('a')

def mult():
	return [lambda x: i * x for i in range(4)]

#print [m(2) for m in mult()]

class parent(object): x=10
class child1(parent): pass
class child2(parent): pass

#print parent.x, child1.x, child2.x
child1.x=20
#print parent.x, child1.x, child2.x
parent.x=30
#print parent.x, child1.x, child2.x

l=['a','b','c','d','e','f']

# l[1:] : cdr
# l[:1] : car

#print l[1:]
list=[[]]*3
#print list

list[0].append(10)
#print list
#[[10], [10], [10], [10], [10]]

#list[1].append(20)
#print list
#[[10, 20], [10, 20], [10, 20], [10, 20], [10, 20]]

list[1].append(20)
#print list

list[2].append(30)
#print list
list.append(50)
#print list

ll = [ 1 , 3 , 5 , 8 , 10 , 13 , 18 , 36 , 78 ]
#print [x for x in ll[::2] if x%2 ==0]

def f(n): return [x**3 for x in range(n)]

f(5)

e=[]
e.append([x for x in range(101)])

#print ''.join([x for x in range(101)])


def three(x): 
	if (x%3)==0: 
		return x
	else:
		return 0
def five(x): 
	if(x%5)==0: 
		return x
def both(x): 
	if (x%3)==0 & (x%5)==0: 
		return 1
print [three(x) for x in range(1,101)]

#print map(square,filter(even,range(1,10)))

