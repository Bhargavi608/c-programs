#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue()
{
	int value;
	printf("enter value:");
	scanf("%d",&value);
	if((rear+1)%MAX==front)
	{
		printf
		("Queue is FULL\n");
	}
	else
	{
		if(front==-1)
		front=0;
		rear=(rear+1)%MAX;
		queue[rear]=value;
		printf("Inserted:%d\n",value);
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Deleted:%d\n",queue[front]);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%MAX;
		}
	}
}
void display()
{
	if(front==-1)
	{
		printf("Queue is Empty\n");	
	}
	else{
		int i=front;
		printf("Queue elements:");
		while(1)
		{
			printf("%d",queue[i]);
			if(i==rear)
			break;
			i=(i+1)%MAX;
		}
		printf("\n");
	}
}
main()
{
	int choice,value;
	while(1)
	{
		printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
			    dequeue();
				break;
		    case 3:
			    display();
		    case 4:
			    exit(0);
			default:
			    printf("Invalid choice\n");	
		}
	}
}
