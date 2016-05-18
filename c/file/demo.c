/*
 * =====================================================================================
 *
 *       Filename:  demo.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/25/2016 07:29:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	FILE *fp=fopen("demo.txt","r+");
	char *s="Swami Samartha";
	
	int write= fwrite(s,1,20,fp);
	return 0;
}
