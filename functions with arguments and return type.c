//functions with arguments & with return type
#include<stdio.h>
int addition(int,int);
main()
{
	int a,b,c;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	c=addition(a,b);
	printf("the result is %d",c);
} 
int addition(int x,int y)
{
	return x+y;
}
