#include<stdio.h>
void input(int [],int);
void output(int [],int);
void oddeven(int [],int,int *,int *);
int main()
{
	int a[100],size,p1,p2;
	printf("enter the size of array:");
	scanf("%d",&size);
	input(a,size);
	output(a,size);
	oddeven(a,size,&p1,&p2);
	printf("\nthe sum of odd number is %d and sum of even number is %d",p1,p2);
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
void oddeven(int a[],int n,int *p1,int *p2)
{
	int i,osum=0,esum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			esum=esum+a[i];
		}
		else{
			osum=osum+a[i];
		}
	}
	*p1=osum;
	*p2=esum;
}


















