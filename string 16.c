#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[50][50],temp;
	int i,n,j;
	printf("enter the number of student");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("enter the name of %d student:",i+1);
		gets(a[i]);
	}
	printf("\n the unsorted names of students are:\n");
	for(i=0;i<n;i++)
	{
		puts(a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if((strcmp(a[i],a[j]))>0)
		{
			strcpy(temp,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],temp);
		}
	}
}
printf("\n the sorted names of student are:\n");
for(i=0;i<n;i++)
{
	puts(a[i]);
}
}
