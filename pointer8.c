#include<stdio.h>
void input(int [],int);
void output(int [],int);
void findmaxmin(int [],int,int *,int *);
int main()
{
	int a[100],size,p1,p2;
	printf("enter the size of array:");
	scanf("%d",&size);
	input(a,size);
	printf("Input array is:");
	output(a,size);
	findmaxmin(a,size,&p1,&p2);
	printf("\nsum of maximum and minimum value is:%d",p1+p2);
	printf("\ndifference of maximum and minimum value is:%d",p1-p2);
}
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
}
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void findmaxmin(int a[],int n,int *p1,int *p2)
{
	int i,max=a[0],min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	*p1=max;
	*p2=min;	
}














