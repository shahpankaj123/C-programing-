#include<stdio.h>
void input(int [],int);
void output(int [],int);
void rev(int [],int [],int);
int main()
{
	int a[100],b[100],size;
	printf("enter the size of array:");
	scanf("%d",&size);
	input(a,size);
	printf("input array elements are:\n");
	output(a,size);
	rev(a,b,size);
	printf("\ncopied array elements are:\n");
	output(b,size);
	
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
void rev(int a[],int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
	}
}
