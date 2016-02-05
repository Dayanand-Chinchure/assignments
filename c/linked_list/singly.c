#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

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
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void change_link(struct node *head, int x, int y)
{
	struct node *x_node,*y_node;
	struct node *temp=head;
	while(temp!=NULL)
	{
		if((temp->next)->data == x)
			x_node=temp;
		if(temp->data == y)
			y_node=temp;
		temp=temp->next;
	}

	printf("%d %d \n",x_node->data,y_node->data);
}

void reverse(struct node *head)
{
	struct node *prev=NULL,*curr=head,*next;

	while(curr)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
	display(head);
}

int main()
{
	struct node *head=NULL;

	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]),i;
	for(i=0;i<n;i++)
		insert(&head,a[i]);
	//change_link(head,4,9);
	reverse(head);
	//display(head);
	return 0;
}

