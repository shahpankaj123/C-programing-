#include<stdio.h>
int main()
{

	char a[50],b;
	int i,j=0,c[50];
	printf("enter any string:\n");
	gets(a);
	printf("the strings is:\n");
	puts(a);
	printf("enter the character whose frequency to be determined ");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b||a[i]+32==b||a[i]-32==b)
		{
			c[j]=i;
			j++;
		}
	}
	if(j==0)
	{
	printf("Given character is not present in string");
}
else
{
	printf("Given character is present in string and its position are:");
	for(i=0;i<j;i++)
	{
		printf("%d\t",c[i]);
	}
}
}
