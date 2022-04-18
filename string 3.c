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
	printf("the reverse string is\n");
	for(i=c-1;i>=0;i--)
	printf("%c",a[i]);
}
