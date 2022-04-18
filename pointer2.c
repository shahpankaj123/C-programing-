#include<stdio.h>
void input(int [],int);
void output(int [],int);
void avg(int [],int,float *);
int main()
{
	int a[100],size;
    float b; 
	printf("enter the size of array:");
	scanf("%d",&size);
	input(a,size);
	output(a,size);
	avg(a,size,&b);
	printf("\nthe avarage is %f",b);
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
	printf("input array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void avg(int a[],int n,float *p1)
{
	int i,sum=0;
    for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	*p1=(sum*1.0)/n; 
}












