#include<stdio.h>
void input(int [],int);
void output(int [],int);
void add(int [],int [],int [],int n);
int main()
{
	int a[100],b[100],c[100],size;
	printf("enter the size of array:");
	scanf("%d",&size);
	input(a,size);
	printf("input 1st array elements are:\n");
	output(a,size);
	input(b,size);
	printf("\ninput 2nd  array elements are:\n");
	output(b,size);
	add(a,b,c,size);
	printf("\nadd of two array elements are:\n");
	output(c,size);
}
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nenter a[%d] element:",i);
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
void add(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
}










