#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,smallest;
	printf("enter the range of array");
	scanf("%d",&n);
	printf("enter the %dth array element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<smallest)
		{
			smallest=a[i];
		}
	}
	printf("smallest number in an array is %d",smallest);
}
