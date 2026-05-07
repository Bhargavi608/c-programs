//To find whether given number is pallindrum or not 
#include<stdio.h>
main()
{
	int n,rem,rev=0,temp;
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if (temp ==rev)
	printf("%d is pallindrum",temp);
	else;
    printf("%d is not pallindrum",temp);
}
