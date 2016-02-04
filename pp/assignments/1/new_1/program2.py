import os

import sys#command line arguments

#print "Number of arguments",len(sys.argv)

#print "Argument List",str(sys.argv)

fp1 = open('tmp-file-info.lst','a+')

fp2 = open('files.output','a+')

fp3 = open('new-files-found.lst','r')

#print os.getcwd()

#list = os.listdir(os.getcwd())

#list = os.listdir(sys.argv[1])

list = []

str = fp3.readline()
while str != "":
    list.extend(str.splitlines())
    str = fp3.readline()

#print str.split('\n')

#list.append(str)

print list

f = []

d = []

for i in range (0,len(list)):
    if(os.path.isfile(list[i])):
        f.append(list[i])
    else:
        d.append(list[i])

print list
print "appends list of directories to file named tmp-file-info.lst"
#for i in range(0,len(d)):
#    print d[i]

print "appends list of files to file named files.output"
#for i in range(0,len(f)):
#    print f[i]

fp1.truncate()
for i in range (0,len(d)):
    fp1.write(d[i]+'\n')

fp2.truncate()
for i in range (0,len(f)):
    fp2.write(f[i]+'\n')



