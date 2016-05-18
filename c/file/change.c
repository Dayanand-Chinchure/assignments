#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp1,*fp2;
	fp1=fopen(argv[1],"rw+");
	fp2=fopen(argv[2],"rw+");
	
	int seek=fseek(fp1,0,SEEK_END);
	printf("%d \n",seek);
	long fsize=ftell(fp1);
	fseek(fp1,0,SEEK_SET);

	char *buffer=malloc(fsize+1);

	fread(buffer,fsize,1,fp1);

	fwrite(buffer,fsize,1,fp2);
	return 0;
}
