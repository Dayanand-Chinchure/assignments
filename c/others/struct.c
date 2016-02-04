#include<stdio.h>

struct node
{
	int a;
	char b[20];
	float c;
}b1;

int main()
{
	printf("%d \n",sizeof(b1));
	return 0;
}
