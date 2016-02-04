import sys
import os
import subprocess as sp
import commands
f=open("dir2process.lst","r")
f1=open("new-files-found.lst","w")

path1=sys.stdout

for i in f:
	path=i.split()
	p=''.join(path)
	txt=commands.getoutput("ls -l " + p)
	print >> f1,txt

f.close()
f1.close()


