//program to read a string completely from user
#include<string.h>
 main()
{
	char name [20];
	printf("enter your name");
	scanf("%[^\n]s",name);
	printf("my name is %s"name);
}
