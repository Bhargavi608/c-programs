#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *rear=NULL, *front=NULL;
void enqueue()
{
	int value;
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter value\n");
	scanf("%d",&value);
	
	
	newnode->data=value;
	newnode->next=NULL;
	if(rear==NULL)
	{
		rear=newnode;
		front=newnode;
	}
	else
	{
	 rear->next=newnode;
	 rear=newnode;
	}
	printf("Inserted %d\n",value);
}

void dequeue()
{
	struct node *temp;
	
	if(front==NULL)
	{
		printf("queue is Underflow\n");
		return;
	}
    temp=front;
    printf("Deleted %d\n",front->data);
    front=front->next;
    free(temp);
	
}

void display()
{
	struct node *temp;
	if (front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
		printf("queue elements are\n");
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
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
