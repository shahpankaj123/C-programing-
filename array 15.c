#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,num,count=0;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter any number for finding frequency");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("The number is not present in the array");
	}
	else
	{
		printf("the number of frequency of %d is %d",num,count);
	}
}
