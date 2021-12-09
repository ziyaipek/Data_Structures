
#include <stdio.h>
#include <stdlib.h>

int * queue = NULL;
int head = 0, iter = 0, capacity = 2;

int deque()
{
	if(iter == head)
	{
		printf("Queue is empty");
		return -1;
	}
	return queue[head++];
}

void clean()
{
	if (head == 0)
		return ;
	for (int i=0; i < capacity; i++)
	{
		queue[i] = queue[i + head];
	}
	queue -= head;
	head = 0;
}

void enque(int a)
{
	if(queue == NULL)
	{
		queue = (int*)malloc(sizeof(int) * capacity);
	}
	if(iter == capacity)
	{
		capacity *= 2;
		int* newQueue = (int*)malloc(sizeof(int) * capacity);
		for(int i=0; i < capacity/2; i++)
		{
			newQueue[i] = queue[i];
			free(queue);
			queue = newQueue;
		}
	}
	queue[iter++] = a;
}

int main(){

	for(int i=0; i < 20; i++)
	{
		enque(i * 10);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",deque());
	}
}