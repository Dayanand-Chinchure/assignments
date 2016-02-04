#include<malloc.h>

void check(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	int a[]={3,1,4,5,6,7,7};
	int n=sizeof(a)/sizeof(a[0]);
	
	check(a,n);
	return 0;
}



