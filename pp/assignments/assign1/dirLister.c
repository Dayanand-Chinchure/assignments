#include<malloc.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include "function.h"

int main()
{
	FILE *fp=fopen("dir2process.lst","r");
	FILE *fp1=fopen("new-files-found.lst","w");
	size_t s;
	char *list=(char *)malloc(sizeof(char)*100);
	size_t len=32;

	while (getline(&list, &len, fp)!=-1)
	{
		char *buf;
		char *list1=final_list(list);
		FILE *ptr;

		if ((ptr = popen(("%s",list1),"r")) != NULL) 
		{
			while (fgets(buf,50,ptr) != NULL)
        			 fprintf(fp1, "%s", buf);

			pclose(ptr);
		}
	}
		fclose(fp);
		fclose(fp1);
	return 0;
}
