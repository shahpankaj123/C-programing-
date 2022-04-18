#include<stdio.h>
#include<stdio.h>
int count(char *);
int main()
{
	char a[100];
	int result;
	printf("enter any strings:");
	gets(a);
	result=count(a);
	printf("the length of string:%d",result);
	return 0;
}
int count(char *a)
{
	int i,sum=0;
	for(i=0;a[i]!='\0';i++)
	{
		sum++;
	}
	return sum;
}
