/*
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node * next;
	struct node * prev;
};

void printList(struct node *node)
{
	int i = 1;
	while(node != NULL)
	{
		printf("%d-  %d\n", i, node->data);
		node = node->next;
		i++;
	}
}

void push(struct node **head_ref , int new_data)
{
	struct node* iter = (*head_ref);
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=new_data;
	temp->next = (*head_ref);
	temp->prev = NULL;
	if ((*head_ref) != NULL)
		(*head_ref)->prev = temp;
	(*head_ref) = temp;
}

void insertAfter(struct node* prev_node , int new_data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = new_data;
	temp->next = prev_node->next;
	temp->prev = prev_node;
	prev_node->next = temp;
}

void append(struct node *head_ref , int new_data)
{
	struct node* iter = head_ref;
	while (iter->next != NULL)
	{
		iter = iter->next;
	}
	iter->next = (struct node*)malloc(sizeof(struct node));
	iter->next->data = new_data;
	iter->next->next = NULL;
	iter->next->prev = iter;
}

void deleteNode(struct node **head_ref , int key)
{
	struct node* iter = (*head_ref);
	if(iter != NULL && iter->data == key)
	{
		(*head_ref) = iter->next;
		(*head_ref)->prev = NULL;
		free(iter);
		return;
	}
	else
	{
		while(iter != NULL && iter->data != key)
		{
			iter = iter->next;
		}
		if(iter->next == NULL)
		{
			iter->prev->next = NULL;
			free(iter);
		}
		else
		{
			iter->prev->next = iter->next;
			iter->next->prev = iter->prev;
			free(iter);
		}
	}	
}

int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* node2 = (struct node*)malloc(sizeof(struct node));
	struct node* node3 = (struct node*)malloc(sizeof(struct node));
	head->data = 10; node2->data = 20; node3->data = 30;
	head->next = node2; node2->next = node3; node3->next = NULL;
	head->prev = NULL; node2->prev = head; node3->prev = node2;

	

	push(&head,5);
	insertAfter(node2, 25);
	append(head, 35);

	deleteNode(&head,5);
	deleteNode(&head, 25);
	deleteNode(&head, 35);
	
	printList(head);

	
	getchar;
	return 0;
}
*/