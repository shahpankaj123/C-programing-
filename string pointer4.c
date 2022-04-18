#include<stdio.h>
#include<stdio.h>
void check(char *,char);
int main()
{
	char a[100],ch;
	printf("enter any strings:");
	gets(a);
	printf("Enter th character whose position is to be determined:");
	scanf("%c",&ch);
	check(a,ch);
	
}
void check(char *a,char c)
{
	int i,j=0,b[100];
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c)
		{
			b[j]=i;
			j++;
		}
	}
	if(j==0)
	{
		printf("Given character %c doesnot beleong to string",c);
	}
	else
	{
		printf("%c belong in string whose position is:",c);
		for(i=0;i<j;i++)
		{
			printf("%d\t",b[i]);
		}
	}
	
 } 
