 #include<stdio.h>
 #include<stdlib.h>
 struct node
 { 
  int data;
  struct node *next;
 };
 struct node *head=NULL;
 
 void display()
 {
 	struct node *temp=head;
 	
 	if(head==NULL)
 	{
 		printf("List is empty\n");
 		return;
	}
 while(temp!=NULL)
 {
 	printf("%d->",temp->data);
 	temp=temp->next;
 }
 printf("NULL\n");
}
void insert_begin()
{
	struct node *newnode;
	newnode =(struct node*)malloc(sizeof(struct node));
	
	printf("Enter data:");
	scanf("%d",&newnode->data);
	
	newnode->next=head;
	head=newnode;
	display();
}

void insert_end()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{ 
	 temp=temp->next;
	}
	temp->next=newnode;
	display();
}

void insert_pos()
{
	struct node *newnode,*temp;
	int pos,i;
	printf("Enter position:");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	temp=head;
	for(i=1;i<pos-1;i++);
	temp=temp->next;
	newnode->next=temp->next;
	temp->next=newnode;
	display();
}
void delete_begin()
{
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
	display();
}
void delete_end()
{
	struct node *temp,*prev;
	temp=head;
	while(temp->next!=NULL);
	free(temp);
	display();
	
}
void delete_pos()
{
	struct node *temp,*prev;
	int pos,i;
	printf("Enter position:");
	scanf("%d",&pos);
	temp=head;
	for(i=1;i<pos&&temp!=NULL;i++)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
}
void search()
{
	struct node *temp;
	int key,pos=1,found=0;
	printf("Enter element to search:");
	scanf("%d",&key);
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("Element found at position %d\n",pos);
			found=1;
			break;
		}
		temp=temp->next;
		pos++;
	}
	if(found==0)
	printf("Element not found\n");
}
main()
{
	struct node *newnode,*temp;
	int n,i;
	printf("Enter number of nodes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data for node %d:",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	int choice;
	while(1)
	{
		printf("\n--- MENU ---\n");
		printf("1.Insertbegin\n2.InsertEnd\n3.Insert_pos\n");
        printf("4.Deletebegin\n5.DeleteEnd\n6.Delete_pos\n");
		printf("7.search\n8.Exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: insert_begin();break;
			case 2: insert_end();break;
			case 3: insert_pos();break;
			case 4: delete_begin();break;
			case 5: delete_end();break;
			case 6: delete_pos();break;
			case 7: search();break;
			case 8: exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
