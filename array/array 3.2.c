#include<stdio.h>
#include<conio.h>
int main()
{
	char a[100],k;
	int i,j,c=0,m;
	printf("enter any string\n");
	gets(a);
	printf("entered strings:");
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("\nthe lenght of string is %d",c);
	m=c;
	for(i=0,j=m-1;i<j;i++,j--);
	{
		k=a[i];
		a[i]=a[j];
		a[j]=k;
	}
printf("\n%s",a);
	
}
