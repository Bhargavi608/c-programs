#include<stdio.h>
void display(int,float);
struct student
{
	int rno;
	float per;
};
main()
{
	struct student s;
	printf("enter student rno,per");
	scanf("%d%f",&s.rno,&s.per);
	display (s.rno,s.per);//function calling 
}
void display(int a, float b)//function defination
{
	printf("the student details are:\n");
	printf("%d\t%f\n",a,b);
}
