//max of 2 numbers
#include<stdio.h>
main()
{ 
  int a,b,max;
  printf("enter a&b values");
  scanf("%d%d",&a,&b);
  max=(a>b)?a:b;
  printf("the maximum number is %d",max);
}
