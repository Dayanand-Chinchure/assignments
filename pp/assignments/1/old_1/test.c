#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>


int main(int argc, char **argv)
{
	pid_t pid;
	int p[2];
	char c;

	if(pipe(p)<0)
	{
		fprintf(stderr,"%s Could not create the pipe\n",argv[0]);
		exit(-1);
	}
	else
	{
		if(pid==0)
		{
			close(p[1]);
			while(read(p[0],&c,1)>0) printf()

