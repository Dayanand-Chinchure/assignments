/*
 * =====================================================================================
 *
 *       Filename:  z_algo.c
 *
 *    Description:  Z Algorithm implementation
 *
 *        Version:  1.0
 *        Created:  03/03/2016 05:10:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dayanand Chinchure & Aditya Patil
 *   Organization:  PUCSD
 *
 * =====================================================================================
 */
#include<malloc.h>
#include<string.h>

int check(char *a,char *b, int n, int m)
{
	int res[m],i=0,j=0,k=0;

	for(i=0;i<m;i++)
	{
		if(a[k]==b[i])
		{
			res[i]=k+1;
			k++;
		}
		else
		{
			k=0;
			res[i]=0;
		}

		if(k==m)
			k=0;
	}

	for(i=0;i<m;i++)
	{
		if(res[i]==n)
			j++;
	}
	return j;
}

int main()
{
	char *a="story";
	char *b="I story love story my story";
	int n=strlen(a)-1;
	int m=strlen(b)-1;
	printf("Count of pattern = %d \n",check(a,b,n,m));
	return 0;
}
