#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *base;
    int *top;
    int size;
}stack_t;

stack_t *create_stack(int size)
{
    stack_t *st=NULL;
    st=(stack_t *)malloc(sizeof(stack_t));
    st->base=(int *)malloc(size * sizeof(int));
    st->size=size;
    return st;
}


int main()
{
    stack_t *st=create_stack(5);
    printf("Returned stack\n");
    return 0;
}
