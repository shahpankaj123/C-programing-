#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,c=0;
	printf("enter any string:\n");
	gets(a);
	printf("entered string:\n");
	puts(a);

	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=c-1;i>=0;i--)
	{
		b[c-1-i]=a[i];
	}
	printf("copied reverse string:\n");
	puts(b);
}
