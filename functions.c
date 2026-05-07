//sum of two numbers using functions
#include<stdio.h>
void addition();
main()
{
	addition();
	addition();
	addition();
}
void addition()
{
	int a,b,c;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the sumis %d",c);
}
