#include<malloc.h>

int partiton(int *a, int start, int end)
{
	int pivot=a[end],i,j;
	int pindex=start,temp=0;

	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			//swap(a[i],a[pindex]);
			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;

			pindex=pindex+1;
		}
	}
	//swap(a[pindex],a[end]);
	temp=a[pindex];
	a[pindex]=a[end];
	a[end]=temp;

	return pindex;
}

void check(int *a, int start, int end)
{
	if(start<end)
	{
		int pindex=partiton(a,start,end);
		check(a,start,pindex-1);
		check(a,pindex+1,end);
	}
}

int main()
{
	int a[]={3,9,11,2,6,7,5,4,3,4};
	int n=sizeof(a)/sizeof(a[0]),i;
	check(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
