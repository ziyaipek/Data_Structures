/*
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node * next;
};

void printList(struct node *root){
	while(root != NULL)
	{
		printf("%d\n", root->data);
		root = root->next;
	}
}

void push(struct node** root , int key)
{
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		temp->data = key;
		temp->next = *root;
		(*root) = temp;
}

void insertAfter(struct node* root, int exist_nodes_data , int key)
{
	struct node* iter = root;
	while(iter->data != exist_nodes_data)
		iter=iter->next;

	if (iter->next != NULL)
	{
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		temp->data = key;
		temp->next = iter->next;
		iter->next = temp;
	}
	else printf("Don't try add to last node with insertAfter function\n");
}

void append(struct node* root , int key)
{
	struct node* iter = root;
	while (iter->next != NULL)
		iter = iter->next;
	iter->next = (struct node*)malloc(sizeof(struct node));
	iter->next->data = key;
	iter->next->next = NULL;
}

void deleteNode(struct node** root, int key)
{
	struct node* iter = *root;
	struct node* iter2 = iter;
	if (iter->data == key && iter != NULL){

		*root = (*root)->next;
			free(iter);
			return;
	}
	else
	{
		while (iter != NULL && iter->next->data != key)
		{
			iter = iter->next;
		}
		iter2 = iter->next;
		if(iter2->next == NULL)
		{
			free(iter2);
			iter->next = NULL;
		}
		else{
			iter->next = iter2->next;
			free(iter2);
		}
	}
}
*/