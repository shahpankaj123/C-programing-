#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,l,row,k;
	printf("enter any string:");
	gets(a);
	l=strlen(a);
	row=l/2+1;
	for(i=0;i<row;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=2*row-i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
