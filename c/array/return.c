#include<malloc.h>

int * fun()
{
	int x=10;
	return x;
}

int main()
{
	printf("%d\n",fun());
	return 0;
}
