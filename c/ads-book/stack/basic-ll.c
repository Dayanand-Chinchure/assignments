#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}ll;

void insert(ll **head, int value)
{
    ll *temp=NULL;
    temp=(ll *)malloc(sizeof(ll));
    temp->data=value;
    temp->next=*head;
    *head=temp;
}

void display(ll *head)
{
    if(head != NULL)
    	return;
    
    head=head->next;
    printf("%d \n",head->data);
}

int main()
{
    ll *head=NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    display(head);
    return 0;
}
