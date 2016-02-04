import os

import sys

fp1 = open('tmp-file-info.lst','r+')

fp2 = open('dirs2process.lst','w+')

fp3 = open('dirs.output','w+')

list = []

sl = []

nsl = []

str = fp1.readline()
while str != "":
    list.extend(str.splitlines())
    str = fp1.readline()

for i in range (0,len(list)):
    if os.path.islink(list[i]):#Return True if path refers to a directory entry that is a symbolic link. Always False if symbolic links are not supported
        sl.append(list[i])
    else:
        nsl.append(list[i])

#print sl

#print nsl

print "appends list of directories without symbolic link to file named dirs2process.lst"
fp2.truncate()
for i in range (0,len(nsl)):
    fp2.write(nsl[i]+'\n')

print "appends list of directories without symbolic link to file named dirs.output"    
fp3.truncate()
for i in range (0,len(nsl)):
    fp3.write(nsl[i]+'\n')
        
