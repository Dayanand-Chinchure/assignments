import sys
import os
import subprocess as sp
import commands
from commands import *

f=open("new-files-found.lst","r")
f1=open("dir2process.lst","r")
f2=open("dirs.output","w")
p=f1.readline()
print p

for i in f:
	path=i.split()
	if path[0][0] is not 't':
		text=commands.getoutput("ls -l " + p)
		print text
		#text=commands.getoutput("ls -l " + p)
		#print text,
