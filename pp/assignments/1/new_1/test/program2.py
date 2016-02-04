import sys
import os

f1=open("tmp-files-info.lst","w")
f2=open("files.output","w")

list=[]

str=f.readline()
while str!="":
	list.extend(str.splitlines())
	str=f.readline()

print list

for i in range(0,len(list)):
	path=''.join(list[i])
	ff=os.path.isdir(path)
	#print ff
		#		print >> f2,path
#	else:
#		print >> f1,path

f.close()
f1.close()
f2.close()
