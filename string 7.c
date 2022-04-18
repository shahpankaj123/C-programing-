#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[10]={"aeiouAEIOU"};
	int i,j,c=0;
	printf("enter any string:\n");
	gets(a);
	printf("entered string:\n");
	puts(a);
	

	for(i=0;a[i]!='\0';i++)
	{
	for(j=0;j<=9;j++)
	{
		if(a[i]==b[j])
		{
			c++;
		}
	}
	}
	printf("the number of vowel letter is %d",c);
}
