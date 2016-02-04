#include<malloc.h>

void check(int *a, int n)
{
	int i,j;
	int value=0,hole=0;

	for(i=0;i<n;i++)
	{
		value=a[i];
		hole=i;

		while(hole >0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

int main()
{
	int a[]={3,1,6,9,3,6,8,2};
	int n=sizeof(a)/sizeof(a[0]);
	check(a,n);
	return 0;
}

