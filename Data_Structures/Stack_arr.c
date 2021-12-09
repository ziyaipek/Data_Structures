/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct stack
{
	int top;
	unsigned capacity;
	int* array;
};

struct stack* createStack(unsigned capacity)
{
	struct stack* new_stack = (struct stack*)malloc(sizeof(struct stack));
	new_stack->top = -1;
	new_stack->capacity = capacity;
	new_stack->array = (int*)malloc(sizeof(int) * new_stack->capacity);
	return new_stack;
}

int isEmpty(struct stack* stack)
{
	return stack->top == -1;
}

int isFull(struct stack* stack)
{
	return stack->top == stack->capacity - 1;
}

void push(struct stack* stack , int item)
{
	if (isFull(stack)) return;
	stack->array[++stack->top] = item;
	printf("%d pushed to stack\n", item);
}

int pop(struct stack* stack)
{
	if (isEmpty(stack)) return INT_MIN;
	return stack->array[stack->top--];
}

int peek(struct stack* stack)
{
	if (isEmpty(stack)) return INT_MIN;
	return stack->array[stack->top];
}

int main()
{
	struct stack* stack = createStack(4);
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);

	printf("%d popped from stack", pop(stack));

	getchar;
	return 0;
}
*/