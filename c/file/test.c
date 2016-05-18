/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  Basic file handling functions
 *
 *        Version:  1.0
 *        Created:  04/25/2016 07:13:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dayanand Chinchure
 *   Organization:  Rocky
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 1
#define NUMELEM 10

int main(void)
{
	FILE *fd = NULL;
	char buff[100];
	memset(buff,0,sizeof(buff));
	
	fd=fopen("demo.txt","w+");

	if(fd == NULL)
	{
		printf("foprn() error\n");
		return 1;
	}
	printf("File is been opened\n");
	
	if(SIZE*NUMELEM != fread(buff,SIZE,NUMELEM,fd))
	{
		printf("fread() failed\n");
		return 1;
	}

	printf("Bytes read are %s \n",buff);

	if(fseek(fd,11,SEEK_CUR) != 0)
	{
		printf("fseek() fialed\n");
		return 1;
	}

	if(SIZE*NUMELEM != fwrite(buff,SIZE,strlen(buff),fd))
	{
		printf("fwrite() failed\n");
		return 1;
	}
	printf("Data written %s \n",buff);
	printf("fwrite success\n");
	fclose(fd);
	printf("filestream closed through fclose() \n");
	return 0;
}
