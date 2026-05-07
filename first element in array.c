//address of the first element in the array
#include<stdio.h>
main()
{
	int x[4],i;
	for(i=0;i<4;i++)
	{
		printf("the address of x[%d] is %ld\n",i,&x[i]);
	}
	printf("address of array is %d\n",x);
}
