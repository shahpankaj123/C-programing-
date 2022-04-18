#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,n,p,sum,j=0;
	printf("enter th size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] elment",i);
		scanf("%d",&a[i]);
	}
	printf("the array is \n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\nenter the number to be deleted");
		scanf("%d",&p);
			for(i=0;i<n;i++)
			{
				if(a[i]==p)
				{
					sum=i;
					break;
				}
				else
			{
				j++;
			}
				
			}
			for(i=sum;i<n;i++)
			{
				a[i]=a[i+1];
				
			}
		if(j==n)
		{
			printf("no matched number to be detected");
			exit(0);
		}
			
				for(i=0;i<n-1;i++)
				{
					printf("%d\t",a[i]);
				}
}
