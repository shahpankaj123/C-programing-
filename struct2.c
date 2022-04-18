#include<stdio.h>
#include<conio.h>
struct student {
	char name[50];
	char address[50];
	char department[50];
};
int main()
{
	struct student s[100];
	int i,n;
	printf("enter the number of students:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("enter the detail of %d students:",i+1);
		printf("\nenter the number of students:");
		gets(s[i].name);
		printf("enter the address:");
		gets(s[i].address);
		printf("enter the department of student:");
		gets(s[i].department);
	}
	printf("the details of students are from ktm and it department:\n");
	for(i=0;i<n;i++)
	{
		if((strcmp(s[i].address,"ktm")==0) && (strcmp(s[i].department,"it")==0))
		{
			printf("name=%s",s[i].name);
			printf("\naddress=%s",s[i].address);
			printf("\ndepartment=%s",s[i].department);
		}
	}
	getch();
	return 0;
}
