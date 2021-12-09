/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct stack
{
	int data;
	struct stack* next;
};

struct stack* newStack(int data)
{
	struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
	stack->data = data;
	stack->next = NULL;
	return stack;
}

int isEmpty(struct stack *root)
{
	return !root;
}

void push(struct stack** root , int data)
{
	struct stack* temp = newStack(data);
	temp->next = *root;
	*root = temp;
	printf("%d pushed to stack\n", data);
}

int pop(struct stack** root)
{
	if (isEmpty(root)) return INT_MIN;
	struct stack* temp = *root;
	int popped = temp->data;
	*root = temp->next;
	free(temp);
	return popped;
}

int peek(struct stack* root)
{
	if (isEmpty(root)) return INT_MIN;
	return root->data;
}

int main()
{
	struct stacknode* root = NULL;
	push(&root,10);
	push(&root, 20);
	push(&root, 25);
	push(&root, 30);

	printf("%d popped from stack\n", pop(&root));
	printf("Top element is %d\n", peek(root));

	getchar;
	return 0;
}
*/