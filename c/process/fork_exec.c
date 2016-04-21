#include<malloc.h>
#include<unistd.h>
#include<sys/types.h>

int spawn(char *p1, char **a)
{
	pid_t child_pid;
	
	child_pid=fork();
	if(child_pid !=0)
		return child_pid;
	else
	{
		execvp(p1,a);
		fprintf(stderr,"An Error occured in execvp\n");
		return;
	}
}	


int main()
{
	char *a[]={"ls","-l","/",NULL};	
	spawn("mkdir",a);
	printf("Done with main program\n");
	return 0;
}

