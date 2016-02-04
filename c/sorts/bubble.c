#include<malloc.h>

void check(int *a , int n)
{
	int i,j;
	int temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	int a[]={3,1,6,8,6,7,9,4};
	int n=sizeof(a)/sizeof(a[0]);
	check(a,n);
	return 0;
}
