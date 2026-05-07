//write a simple program to read int ,char and string using scan() and displayusing 
//printf() in all th above given platforms.*/
#include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x);
	printf("enter floating point number");
	scanf("%f",&y);
	printf("enter a character");
	scanf("\n");
	scanf("%c",&ch);
	printf("enter a word");
	scanf("%s",s);
	printf("the integer is %d\n",x);
	printf("the floating point number is%f\n",y);
	printf("the character is %c\n",ch);
	printf("the string is %s\n",s);
} 
