#include "header.h"

int main()
{
	FILE *fp=fopen("new-files-found.lst","r");
	FILE *fp1=fopen("tmp-files-info.lst","w+");
	FILE *fp2=fopen("file.output","w+");
	char *list=(char *)malloc(sizeof(char)*100);

	while(fgets(list,100,fp))
	{
		if(list[0]=='d')
			fprintf(fp1,"%s",list);
		else
			fprintf(fp2,"%s",list);
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
