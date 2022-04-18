#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,c=0,k=0;
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
	printf("the revrese string is:\n");
	puts(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i]||a[i]==b[i]-32||a[i]==b[i]+32)
		{
		k++;	
		}
	}
	if(k==c)
	{
		printf(" palindrome number");
	}
	else
	{
		printf(" Not palindrome number");
	}
}
