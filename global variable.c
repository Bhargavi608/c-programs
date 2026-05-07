#include<stdio.h>
int x=10;  //Global variable
void display ();
main()
{
	int y=20;//Local variable
	printf("the value of x is %d",x);
	printf("the value of y is %d",y);
	void display();
	{
		int z=30;//Local variable 
		printf("the value of x is %d",x);
		printf("the value of y is %d",y);
		       //error
    printf("the value of z is %d",z);
	}
}
