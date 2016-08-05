#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

void add()
{
}

void insert(struct node **head,int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *tail;
	temp->data=data;
	temp->next=NULL;

	if(*head==NULL)
	{
		*head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}

void display(struct node *head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}


int main()
{
	struct node *head=NULL;
	//just a test line
	void (*my_insert)(struct node **,int)=insert;

	(*my_insert)(&head,1);
	(*my_insert)(&head,2);
	(*my_insert)(&head,3);
	(*my_insert)(&head,4);
	(*my_insert)(&head,5);
	
	void (*my_display)(struct node *)=display;
	
	(*my_display)(head);
	return 0;
}
