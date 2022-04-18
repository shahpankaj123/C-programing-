#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b;
	int i,j,count=0;
	printf("enter any string:\n");
	gets(a);
	printf("the strings is:\n");
	puts(a);
	printf("enter the character whose frequency to be determined ");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b||b==a[i]+32||b==a[i]-32)
		{
			count++;
		}
	}
	printf("The frequency of %c is %d :",b,count);
	
}
