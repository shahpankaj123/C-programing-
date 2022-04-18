#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,j,sum,max,c[50],p;
	printf("enter any string:");
	gets(a);
	printf("the given string is:");
	puts(a);
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	for(i=0;a[i]!=0;i++)
	{
		sum=0;
		for(j=0;a[j]!=0;j++)
		{
			if(a[i]==b[j])
			{
				sum++;
			}
			c[i]=sum;
		}
	}
	max=c[0];
	for(i=0;a[i]!=0;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
			p=i;
		}
	}
	printf("%c occur maximum times in given string whose frequency is:%d",a[p],max);
}
