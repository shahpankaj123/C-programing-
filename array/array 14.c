#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,j,n,factor,count=0;
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
	printf("\nenter the number whose position is to be determined");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(a[i]==j)
		{
		count++;
		printf("\n The number is present in the array and its position is %d",i);
		break;
		}
	
	}
	if(count==0)
	{
		printf("The number doesnot present in array");
	}
	
		
}
		
