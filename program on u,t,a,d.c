#include<stdio.h>
main()
{
	float u,t,a,d;
	printf("enter intial velocity");
	scanf("%f",&u);
	printf("enter acceleration");
	scanf("%f",&a);
	printf("enter time");
	scanf("%f",&t);
	d=u*t+0.5*a*t*t;
	printf("the distance is %f",d);	
}
