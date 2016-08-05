#include <stdio.h>
#include <stdlib.h>

typedef struct st_t
{
    int item;
    struct st_t *next;
}stack_t;

stack_t *getnode()
{
    stack_t *st=(stack_t *)malloc(sizeof(stack_t));
    return st;
}

stack_t *create_stack(void)
{
    stack_t *st;
    st=getnode();
    st->next=NULL;
    return st;
}

void push(stack_t *st, int value)
{
    stack_t *temp;
    temp=getnode();
    temp->item=value;
    temp->next=st->next;
    st->next=temp;
}

int stack_empty(stack_t *st)
{
    return (st->next == NULL);
}

void pop(stack_t *st)
{
    stack_t *temp;
    int temp_value;

    temp=st->next;
    st->next=temp->next;
    temp_value=temp->item;
    printf("pop %d \n",temp_value);
}


void display(stack_t *st)
{
    while(st !=NULL)
    {
        printf("%d\n",st->item);
        st=st->next;
    }
}

void top_element(stack_t *st)
{
    printf("Top is %d\n",st->next->item);
}


int main()
{
    stack_t *st=create_stack();
    push(st,10);
    push(st,20);
    top_element(st);
    push(st,30);
    top_element(st);
    push(st,40);
    top_element(st);
    display(st);
    pop(st);
    top_element(st);
    pop(st);
    display(st);
    return 0;
}
