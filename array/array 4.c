#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("enter the range of array");
	scanf("%d",&n);
	printf("enter the %d array element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of all the array element is %d",sum);
	getch();
	return 0;
}
