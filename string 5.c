#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],k;
	int i,j,c=0;
	printf("enter any string:\n");
	gets(a);
	printf("entered string:\n");
	puts(a);

	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=0,j=c-1;i<j;i++,j--)
	{
		k=a[i];
		a[i]=a[j];
		a[j]=k;
	}
	printf("reversed string is :\n");
	puts(a);
}
	
