#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int i;
	printf("enter any string:\n");
	gets(a);
	printf("the sring is:\n");
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=91)
		{
			a[i]=a[i]+32;
		}
	}
	printf("The string in lower case is:\n");
	puts(a);
	
}
