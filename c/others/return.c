#include<malloc.h>

int * fun()
{
	static int y=10;
	return &y;
}

int main()
{
	int *x=fun();
	printf("%d \n",*x);
	return 0;
}

