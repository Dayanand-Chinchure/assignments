#include "header.h"

int main()
{
	int depth=2;
	FILE *fp=fopen("new-files-found.lst","r");
	FILE *fp1=fopen("dir2process.lst","r+");
	char *list=(char *)malloc(sizeof(char)*100);
	size_t len = 32; 
	char *list1=(char *)malloc(sizeof(char)*100);
	//to concat the output and the text in dir2process.lst file
	size_t s1;
	
	list1=getlist(fp1,&s1);
	list1[strlen(list1)-1]='\0';
	
	while (getline(&list, &len, fp)!=-1)
	{ 
		char *word=(char *)malloc(sizeof(char)*100);
		char *list2=(char *)malloc(sizeof(char)*100);
		char *list3=(char *)malloc(sizeof(char)*200);
		strcat(list1,list3);
		word=get_word(list);
		word[strlen(word)]='\0';
		//strcat(list3,word);
		list3[strlen(list3)]='\0';
		fprintf(fp1,"%s\n",list3);
		fflush(fp1);
		free(list2);
		free(word);
		free(list3);
	}
	return 0;
}
