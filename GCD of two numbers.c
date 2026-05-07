//To find the GCD of two numbers 
 #include<stdio.h>
 int GCD(int,int);
 main()
 {
 	int n1,n2;
 	printf("enter two numbers");
 	scanf("%d%d",&n1,&n2);
 	printf("The GCD OF %d and %d is %d",n1,n2,GCD(n1,n2));
}
int GCD( int n1,int n2)
{
	if (n2!=0)
	{
		return GCD(n2,n1%n2);
	}
	else
	{
		return n1;
	}
}
