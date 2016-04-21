#include<malloc.h>
#include<unistd.h>

int main()
{
	printf("Start\n");
	int count=0;
	pid_t pid=fork();
	
	if(pid ==0)
	{
		int i=0;
		for(i=0;i<5;i++)
			printf("Child Process count = %d \n",++count);
	}
	else
	{
		if(pid > 0)
		{
			int j=0;
			for(j=0;j<5;j++)
				printf("Parent process count= %d\n",++count);
		}
		else
		{
			printf("Fork Failed !\n");
		}
	}
	printf("End\n");
	return 0;
}
