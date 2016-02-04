import os

import sys#command line arguments

print "Number of arguments",len(sys.argv)

print "Argument List",str(sys.argv)

fp = open('dirs2process.lst','w+')

depth = sys.argv[1]
string = sys.argv[2]

fp.writelines(string)






