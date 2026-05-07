//c program to enter & access students data
#include<stdio.h>
#include<string.h>
struct     student
{
	 int rno;
	 char name[50];
	 float per;
};
main()
{
	struct   student s1,s2;
	s1.rno = 101;
	strcpy(s1.name,"Ravi");
	s1.per = 83.8;
	printf("enter student 2 details");
	scanf("%d%s%f",&s2.rno,s2.name,&s2.per);
	printf("/n student 1 details are :\n");
	printf("student 1 rollno is %d\n",s1.rno);
	printf("student 1 name is %s\n",s1.name);
	printf("student 1 percentage is %f\n",s1.per);
	printf("the student 2 details are :\n");
	printf("the student 2 roll no is %d\n",s2.rno);
	printf("the student 2 name is %s\n",s2.name );
	printf("the student 2 percentage is %f\n",s2.per);
}
