#include<stdio.h>
#include<conio.h>
int main()
{
	char a[100];
	int i,c=0;
	printf("enter any string\n");
	gets(a);
	printf("entered strings:");
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("\nthe lenght of string is %d",c);
}
