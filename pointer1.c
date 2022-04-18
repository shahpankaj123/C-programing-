#include<stdio.h>
void input(int *,int);
void output(int *,int);
int main()
{
	int arr[100],size;
	printf("enter the size of array:");
	scanf("%d",&size);
	input(arr,size);
	output(arr,size);
}
void input(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] elements:",i);
		scanf("%d",(a+i));
	}
}
void output(int *a,int n)
{
	int i;
	printf("input array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
}
