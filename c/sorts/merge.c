#include<malloc.h>

void merge(int *a, int l1, int r1, int l2, int r2)
{
	int temp[r1+r2];
	int i=0;
	while(l1<r1 && l2<r2)
	{
		if(a[l1]<a[l2])
		{
			temp[i]=a[l1];
			l1++;
		}	
		else
		{
			temp[i]=a[l2];
			l2++;
		}	
		i++;
	}

	if(l1<r1)
	{
		while(l1<r1)
		{
			temp[i]=a[l1];
			i++;
			l1++;
		}
	}

	if(l2<r2)
	{
		while(l2<r2)
		{
			temp[i]=a[l2];
			i++;
			l2++;
		}
	}

	int j;
	for(j=0;j<i;j++)
		a[j]=temp[j];
}

void check(int *a, int i, int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		check(a,0,mid);
		check(a,mid+1,j);
		merge(a,0,mid,mid+1,j);
	}
	else
	{
		int k=0;
		for(k=0;k<j;k++)
			printf("%d ",a[k]);
		printf("\n");
	}

}

int main()
{
	int a[]={3,2,6,8,32,1,3,5,7,8,9};
	int n=sizeof(a)/sizeof(a[0]),i;
	check(a,0,n-1);
	return 0;
}
