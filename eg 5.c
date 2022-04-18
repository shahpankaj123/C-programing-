#include<stdio.h>
#include<conio.h>
void input(int *,int);
void output(int *,int);
void sum(int *,int);
int main()
{
	int a[100],n,i,*p1;
	p1=&a[0];
	printf("enter the size of array:");
	scanf("%d",&n);
	input(p1,n);
	output(p1,n);
	sum(p1,n);
}
void input(int *p1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:",i);
		scanf("%d",(p1+i));
	}
}
void output(int *p1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p1+i));
	}
}
void sum(int *p1,int n)
{
	int i,max=*p1,min=*p1;
	for(i=1;i<n;i++)
	{
		if(*(p1+i)>max)
		{
			max=*(p1+i);
		}
		else if(*(p1+i)<min)
		{
			min=*(p1+i);
		}
	}
	printf("\nsum of maximum and minimum is %d",max+min);
}
