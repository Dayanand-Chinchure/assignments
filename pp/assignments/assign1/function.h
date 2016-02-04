#include "header.h"

char * getlist(FILE *fp, int *size)
{	
	char *list=(char *)malloc(sizeof(char)*30);
	getline(&list,size,fp);
	list[strlen(list)-1]='\0';
	return list;
}

char * final_list(char *list)
{
	char *temp=(char *)malloc(sizeof(char)*30);
	sprintf(temp,"ls -l ");
	strcat(temp,list);
	return temp;
}

/*
char * get_word(char *list)
{
	char *temp=(char *)malloc(sizeof(char )*100);
	int c=0,i;
	
	for(i=strlen(list)-2;i>0;i--)
	{	
		temp[c]=list[i];
		c++;
		if(list[i]==32)
		{
			int start=0,end=c-2;
			char a=NULL;
			while(start<end)
			{
				a=temp[end];
				temp[end]=temp[start];
				temp[start]=a;
				start++;
				end--;
			}
			return temp;
		}
	}
}
*/

char * memory()
{
	char *list=(char *)malloc(sizeof(char)*100);
	return list;
}	
