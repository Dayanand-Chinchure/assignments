#include<malloc.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include "function.h"

int main()
{
	FILE *fp=fopen("dir2process.lst","r");
	FILE *fp1=fopen("new-files-found.lst","w");
	int size = 0;
	char *list=getlist(fp, &size),*buf;
	FILE *ptr;

	char *tmp1 = (char *) malloc (sizeof (char) * size);
	
	if ((ptr = popen(("ls -l %s",list), "r")) != NULL) 
	{
		while (fgets(buf,50,ptr) != NULL)
        		 fprintf(fp1, "%s", buf);

		pclose(ptr);
	}

	fclose(fp);
	fclose(fp1);
	return 0;
}
