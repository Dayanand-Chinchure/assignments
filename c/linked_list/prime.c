#include<stdio.h>
#include<math.h>
 
int main()
{
	int n=50000,c;
	int b=(int)sqrt(500000000);
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
