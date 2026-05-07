//program on void counter 
#include<stdio.h>
main()
{
	void *p;
	int x=2;
	float y=4.3;
	      p=&x;
	printf("the x value is %d",(*(int*)p));
	printf("address of x is %id\n",p);
    p=&y;
    printf("the y value is %d",(*(float*)p));
    printf("address of y is %ld",p);
}
