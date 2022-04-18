#include<stdio.h>
void len(char [],int *);
int main()
{
	int p1;
	char ch[50];
	printf("enter any string:");
	gets(ch);
	printf("entered string:");
	puts(ch);
	len(ch,&p1);
	printf("lenght of string is:%d",p1);
}
void len(char ch[50],int *p2)
{
	int i,count=0;
	for(i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	*p2=count;
}
