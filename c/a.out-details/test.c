/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2016 11:37:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <malloc.h>

int * check()
{
	int a[10],i;
	for(i=10;i>-1;i--)
		a[i]=i;
	int *b=a;
	return b;
}

int main()
{
	int a=10;
	int *b=check(),i;
	for(i=0;i<10;i++)
		printf("%d ",b[i]);
	return 0;
}
