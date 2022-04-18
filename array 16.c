#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b[100],i,j,n,factor,count=0,k=0;
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
		b[k]=i;
		k++;
		}
	
	}
	if(count==0)
	{
		printf("The number doesnot present in array");
	}
	else
	{
		printf("%d present in allow and its location are :",j);
		for(i=0;i<k;i++)
		{
			printf("%d\t",b[i]);
		}
	}
	
		
}
		
