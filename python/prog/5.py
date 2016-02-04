import subprocess as sc

cmd="cd /home/daya/documents/c"

argc=cmd.split()
proc=sc.Popen(argc,shell=True)
print proc
