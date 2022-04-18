#include<stdio.h>
#include<stdio.h>
void count(char *);
int main()
{
	char a[100];
	int result;
	printf("enter any strings:");
	gets(a);
	count(a);
	printf("\nThe reverse string is :");
	puts(a);
	return 0;
}
void count(char *a)
{
	int i,sum=0,p;
	char temp;
	for(i=0;a[i]!='\0';i++)
	{
		sum++;
	}
	printf("the length of string :%d",sum);
	p=sum;
	for(i=0;i<sum/2;i++)
	{
	temp=a[i];
	a[i]=a[p-1];
	a[p-1]=temp;
	p--;
}

}
