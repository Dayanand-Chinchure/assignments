#include<malloc.h>

struct node 
{
	int data;
	struct node *left,*right;
};

void insert(struct node **, int);
void display(struct node *);
void display_tree(struct node *);

int height(struct node *root)
{
	if(root==NULL)
		return 0;
	
	int left,right;
	left  = height(root->left);
	right = height(root->right);

	if(left > right)
		return left+1;
	else
		return right+1;
}

int findmax(struct node *root)
{
	int root_val,left,right,max=0;
	
	if(root!=NULL)
	{
		root_val=root->data;
		left=findmax(root->left);
		right=findmax(root->right);
		
		if(left>right)
			max=left;
		else
			max=right;
		
		if(root_val > max)
			max=root_val;
	}
	return max;
}


int main()
{
	struct node *root=NULL;
	int a[]={9,3,10,5,12,71,9,9,10};
	int i,n=sizeof(a)/sizeof(int);
	
	for(i=0;i<n;i++)
		insert(&root,a[i]);
	display(root);
	int ht=height(root);
	int max=findmax(root);
	printf("\n%d ,%d\n",ht,max);
	return 0;
}

void insert(struct node **root, int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	
	if(*root==NULL)
		*root=temp;
	else
	{
		if(data > (*root)->data)
			insert(&((*root)->right),data);
		else
			insert(&((*root)->left),data);
	}
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
