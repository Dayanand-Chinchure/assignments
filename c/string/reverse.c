#include<malloc.h>
#include<string.h>

void swap(char *a, int start, int end)
{
	char temp;
	while(start<end)
	{
		temp=a[end];
		a[end]=a[start];
		a[start]=temp;
		start++;
		end--;
	}
}
void check(char *a)
{
	int i=0,temp=0,n=strlen(a);
	while(i<=n)
	{
		if(a[i]==32 || a[i]=='\0')
		{
			swap(a,temp,i-1);
			temp=i+1;
		}
		i++;
	}
	swap(a,0,n-1);
	printf("%s\n",a);
}

int main()
{
	char a[30],i;
	for(i=0;i<4;i++)
	{	
	scanf(" %[^\n]s",a);
	check(a);
	}
	return 0;
}

