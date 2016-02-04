#include<malloc.h>

struct node 
{
	int data;
	struct node *next;
};

void insert(struct node **head, int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=*head;
	*head=temp;
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
	int a[]={1,2,3,4,5};
	int i,n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
		insert(&head,a[i]);
	display(head);
	return 0;
}
