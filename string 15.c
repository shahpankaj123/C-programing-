#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,count1=0,count2=0,count3=0;
	printf("enter any string:\n");
	gets(a);
	printf("the sring is:\n");
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			count1++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}
	printf("The number of alphapet is:%d",count1);
	printf("\nThe number of digit is:%d",count2);
	printf("\nThe number of special symbol is:%d",count3);
}
	
