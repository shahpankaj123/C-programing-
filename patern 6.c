#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,l,k;
	printf("enter any string:");
	gets(a);
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=l-1-i;j++)
		{
			printf("%c",a[j]);
			
		}
		printf("\n");
	}
}
