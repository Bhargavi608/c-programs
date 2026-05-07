#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;
void enqueue()
{
	int value;
	printf("Enter value: ");
	scanf("%d", &value);
	if(rear==MAX-1)
	{
		printf("queue is Overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=value;
		printf("%d enqueued into queue\n",value);
	}
}

void dequeue()
{
	if (rear==-1||front>rear)
	{
		printf("queue is Underflow\n");
	}
	else
	{
		printf("%d dequeue from queue\n", queue[front]);
		front++;
	}
}

void display()
{
	int i;
	if (rear==-1||front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue elements are:\n");
		for (i=front;i<=rear;i++)
		{
			printf("%d->",queue[i]);
		}
	}
}

main()
{
	int choice;
	
	while (1)
	{
		printf("\n--- queue Menu ---\n");
		printf("1. enqueue\n2.dequeue\n3. Display\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:enqueue(); break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
			default: printf("Invalid choice\n");
	    }
    }
}
