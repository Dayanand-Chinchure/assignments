#include<malloc.h>

struct node
{
	int data;
	struct node *left,*right;
};

struct node * insert(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}

void display_tree(struct node *temp)
{
	while(temp!=NULL)
	{
		display_tree(temp->left);
		printf("%d ",temp->data);
		display_tree(temp->right);
		break;
	}
}

void display(struct node *root)
{
	struct node *temp=root;
 	display_tree(temp);
}

int main()
{
	struct node *root=NULL;
	root=insert(1);
	root->right=insert(2);
	root->left=insert(3);
	display(root);
	return 0;
}
