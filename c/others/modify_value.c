#include<malloc.h>

void fun(int *y)
{
	*y=20;
}

int main()
{
	int x=10;
	fun(&x);
	printf("%d\n",x);
	return 0;
}
