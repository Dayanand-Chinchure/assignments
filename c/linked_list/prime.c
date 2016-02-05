#include<stdio.h>
#include<math.h>
 
int main()
{
	int n=21,c;
	int b=(int)sqrt(500000000);
	printf("%d ",b);
	for(c=2;c<=n-1;)
	{
		if(n%c==0)
		{
			printf("Not a prime\n");
			return;
		}
		c++;
		if(c==n)
		{
			printf("Yes Prime\n");
			return;
		}	
	}
	return 0;
}
