#include<malloc.h>

struct side
{
	int data;
	struct side *next;
};

struct node
{
	int data;
	struct side *s;
	struct node *next;
};

void insert(struct node **head, int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *tail;
	temp->data=data;
	temp->s->next=NULL;
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

void do_loop(struct node *head,int *b, int n)
{
	struct node *temp=head;
	int i;
	while(temp!=NULL)
	{
		for(i=0;i<3;i++)
		{
			temp->s->data=b[i];
			temp=temp->s->next;
		}
		temp=temp->next;
	}

}
int main()
{
	int a[]={10,20,30};
	int b[]={1,2,3};
	
	struct node *head=NULL;
	
	void (*my_insert)(struct node **,int)=insert;
	
	(*my_insert)(&head,a[0]);
	(*my_insert)(&head,a[1]);
	(*my_insert)(&head,a[2]);
	
	int n=sizeof(b)/sizeof(b[0]);
	do_loop(head,b,n);
	return 0;
}
