#include<unistd.h>
#include<malloc.h>
#include<sys/types.h>


int main()
{
	pid_t pid;
	pid=fork();
	if(pid <0)
		printf("Cant fork\n");
	else
	{
		if(pid ==0)
			printf("Child\n");
		else
		{
			fork();
			printf("Dayanand\n");
		}	
	}
	return 0;
}
