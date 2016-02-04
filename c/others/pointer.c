#include<malloc.h>

char * fun()
{	

	static char a[20];
	scanf("%s",a);
	return a;
}

int main()
{
	char *ptr;
	ptr=fun();
	printf("%s ",*ptr);
	return 0;
}

