#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b[100],i,n;
	printf("enter the range of araay ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter a[%d] 1st array element",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("enter b[%d] 2nd array element",i);
		scanf("%d",&b[i]);
	}
		printf("the input %d 1st array elements are\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
		printf("the input %d 2nd array elements are\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("the addition of two array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]+b[i]);
	}
		printf("\nthe multiplication of two array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]*b[i]);
	}
		printf("\nthe substraction of two array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]-b[i]);
	}
	getch();
}
