#include<stdio.h>
struct student {
	char name[50];
	int roll;
	int sem;
};
int main()
{
    struct student a[100];
	int i,n;
	printf("enter the no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("name:");
		scanf("%s",&a[i].name);
		printf("rollno:");
		scanf("%d",&a[i].roll);
		printf("semester:");
		scanf("%d",&a[i].sem);
	}
	for(i=0;i<n;i++)
	{
		int j=1;
		printf("\nThe detail of %d student is:\n",j);
		printf("\nName:%s",a[i].name);
		printf("\nrollno:%d",a[i].roll);
		printf("\nsemester:%d\n",a[i].sem);
		j++;
	}
	getch();
	return 0;
}
