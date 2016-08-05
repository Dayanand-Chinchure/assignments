#include <stdio.h>
#include <stdlib.h>

int size=10;

struct stack
{
    int *top;
    int *base;
};

struct stack *create_stack()
{
    struct stack *st=(struct stack *)malloc(sizeof(struct stack));
    st->base=malloc(size * sizeof(int));
    st->top=st->base;
    return st;
}

void push(struct stack *st, int value)
{
    if (st->top < st->base + size)
    {
        *(st->top)=value;
        st->top+=1;
    }
}

void display(struct stack *st)
{
    while((st->top) >  size)
    {
        printf("%d ",*(st->top));
        st->top-=1;
    }
}


int main()
{
    struct stack *st=create_stack();
    push(st,10);
    push(st,20);
    push(st,30);
    display(st);
    return 0;
}
