import sys
import os
import subprocess as sp

f=open("new-files-found.lst","r")
f1=open("tmp-dir-info.lst","w")
f2=open("file.output","w")

for i in f:
	path=i.split()
	if path[0][0] is 'd':
		print >> f1,path
	
	if path[0][0] is '-' or path[0][0] is 's':
		print >> f2,path

