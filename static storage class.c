//program on  static storage class 
#include<stdio.h>
void counter();
main()
{
	counter();
	counter();
	counter();
}
void counter()
{
 static int x=0;
 	x++;
	printf("%d\n",x);
}
