#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],k[50];
	int i,j,c=0;
	printf("enter any string:\n");
	gets(a);
	printf("entered string:\n");
	puts(a);

	for(i=0;a[i]!='\0';i++)
	{
		k[i]=a[i];
	}
	printf("the copied string is\n");
	puts(k);
}
