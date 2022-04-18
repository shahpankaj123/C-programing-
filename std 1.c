#include<stdio.h>
#include<conio.h>
struct student{
	char name[50];
	int age;
	char gender[10];
    char  address[100];
	float percentage;
};
int main()
{
	 struct student std;
	 printf("enter name:");
	 gets(std.name);
	 printf("enter your age:");
	 scanf("%d",&std.age);
	 printf("enter your genger:");
	 gets(std.gender);
	 printf("enter your adress:");
	 gets(std.address);
	 printf("enter your pencentage:");
	 scanf("%f",&std.percentage);
	 printf("the detail information is:\n");
	 printf("name=%s",std.name);
	 printf("name=%s\nage=%d\naddress=%s\npercentage=%f",std.name,std.age,std.address,std.percentage);

}
