#include<malloc.h>

void check(int *a, int n)
{
	int i=0,j;
	int temp=0,min=0;

	while(i<n)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		i++;
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

int main()
{
	int a[]={3,1,4,5,6,8,7};
	int n=sizeof(a)/sizeof(a[0]);
	check(a,n);
	return 0;
}


