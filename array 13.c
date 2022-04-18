#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,j,n,factor,sum=0;
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
	for(i=0;i<n;i++)
	{
		factor=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				factor++;
			}
		}
			
		if(factor==2)
		{
		
		sum=sum+a[i];
		}
	}
	printf("\nThe sum of all prime number is %d",sum);
}
