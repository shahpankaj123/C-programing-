#include<stdio.h>
#include<conio.h>
struct student {
	char name[50];
	int roll;
	float mark;
};
int main()
{
	struct student std;
	struct student *p;
	p=&std;
	printf("enter the name:\n");
	gets(p->name);
	printf("enter the roll number:\n");
	scanf("%d",&p->roll);
	printf("enter the marks:\n");
	scanf("%f",&p->mark);
	printf("\n\n name =%s",p->name);
	printf("\n roll=%d",p->roll);
	printf("\n mark=%f",p->mark);
}
