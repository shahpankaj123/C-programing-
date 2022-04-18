#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,l;
	printf("enter any string:");
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
	for(i=l-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
