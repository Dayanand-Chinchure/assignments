#include "function.h"

int main()
{
	FILE *fp=fopen("dir2process.lst","r+");
	size_t len=32;
	char *path=memory();

	while (getline(&path, &len, fp)!=-1)
	{
		path[strlen(path)-1]='\0';
		printf("%s",path);
		FILE *ptr;
		char *buf;
		if((ptr = popen(("find %s -maxdepth 2 2>&1",path),"r")) != NULL) 
		{
			while (fgets(buf,50,ptr) != NULL)
        			 fprintf(fp,buf);
			pclose(ptr);
		}
	}	
	return 0;
}
