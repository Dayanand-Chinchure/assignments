/*
 * =====================================================================================
 *
 *       Filename:  stack-dynamic.c
 *
 *    Description:  ADS book dynamic stack program to handle the stack underflow problem
 *
 *        Version:  1.0
 *        Created:  07/01/2016 07:46:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dayanand Chinchure
 *   Organization:  Own
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <malloc.h>

typedef struct
{
	int *base;
	int *top;
	int size;
} stack_t;


stack_t *create_stack(int size)
{
	stack_t *st;
	printf("%d " ,sizeof(stack_t));
	st=(stack_t *)malloc(sizeof(stack_t));
	st->base=(int *)malloc(size * sizeof(int));
	st->size=size;
	st->top=st->base;
	return st;
}

int stack_empty(stack_t *st)
{
	return (st->base == st->top);
}


int push(stack_t *st,int x)
{
	if(st->top < st->base + st->size)
	{
		*(st->top)=x;
		st->top = st->top + 1;
	}
	else
		return -1;
}

void display(stack_t *st)
{
	int i=0;
	while(i == st->size)
	{
		printf("%d ",*(st->top));
		st->top= st->top -1;
		i++;
	}
}

int pop(stack_t *st)
{
	st->top= st->top - 1;
	return (*(st->top));
}


void remove_stack(stack_t *st)
{
	free(st->base);
	free(st);
}


int main()
{
	stack_t *st1=create_stack(10);
	push(st1,10);
	push(st1,20);
	push(st1,30);
	push(st1,40);
	//display(st1);
	return 0;
}

