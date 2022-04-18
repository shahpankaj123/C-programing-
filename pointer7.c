#include<stdio.h>
void input(int [],int);
void output(int [],int);
void mul(int [],int [],int [],int);
int main()
{
	int a[100],b[100],c[100],size;
	printf("enter the size of array:");
	scanf("%d",&size);
	input(a,size);
	input(b,size);
	printf("\nInput 1st array is:\n");
	output(a,size);
	printf("\nInput 2nd array is:\n");
	output(b,size);
    mul(a,b,c,size);
	printf("\nthe multipied array is:\n");
	output(c,size);
}
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("enter a[%d] element :",i);
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
void mul( int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i]*b[i];
	}
}
















