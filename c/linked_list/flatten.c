#include<malloc.h>

struct node
{
	int data;
	struct node *right;
	struct node *down;
};

void insert(struct node **head, int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->right=NULL;
	temp->down=NULL;
	
	if(*head==NULL)
	{
		*head=temp;
	}
	else
	{
		temp=temp->down;;
		*head=temp;
	}
}

void display(struct node *head)
{
	struct node *temp=head,*temp1=head->down;

	while(temp!=NULL)
	{
		while(temp1!=NULL)
		{	printf("%d ",temp1->data);
			temp1=temp1->right;
		}
		printf("%d ",temp->data);
		temp=temp->down;
	}
}	

int main()
{
	struct node *head=NULL;
	int a[]={1,2,3};
	int b[]={4,5,6};
	int c[]={7,8,9};
	
	int *ptr[]={a,b,c};
	
	insert(&head,*(ptr[0]+0));
	insert(&head,*(ptr[0]+1));
	insert(&head,*(ptr[0]+2));
	insert(&(head->right),*(ptr[1]+0));
	insert(&(head->right),*(ptr[1]+1));
	insert(&(head->right),*(ptr[1]+2));
	insert(&(head->right->right),*(ptr[2]+0));
	insert(&(head->right->right),*(ptr[2]+1));
	insert(&(head->right->right),*(ptr[2]+2));
	
	display(head);
	return 0;
}
