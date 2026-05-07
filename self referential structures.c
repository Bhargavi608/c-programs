#include<stdio.h>
struct node 
{
	int data ;
	struct node *next ;
};
main()
{
 struct node  a,b;
 a.data=10;
 a.next=NULL;
 b.data=20;
 b.next=NULL;
 a.next=&b;
 printf("the data in a is %d\n",a.data);
 printf("the data in b is %d\n",b.data);
 printf("the data in b is %d\n",a.data);
}
