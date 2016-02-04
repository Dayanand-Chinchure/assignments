import os
import sys

f=open("dirs2process.lst","r")
f1=open("new-files-found.lst","w")

path=f.readline()
path1=path.splitlines()
path2=''.join(path1)

for root,dirs,files in os.walk(path2):
	path=root.split('/')
	print >> f1,os.path.basename(root)
	for file in files:
		print >>f1,file

f.close()
