#include<stdio.h>
#include<conio.h>
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
		printf("\nenter the number to be inserted");
		scanf("%d",&p);
		sum=0;
			for(i=0;i<n;i++)
			{
				if(a[i]>p)
				{
					
					sum=i;
					break;
				}
							
			}
			if(sum==0)
			{
				a[n]=p;
			}
			else
			{
			for(i=n;i>=sum;i--)
			{
				a[i]=a[i-1];
				
			}
			a[sum]=p;
		}
			
			
				for(i=0;i<=n;i++)
				{
					printf("%d\t",a[i]);
				}
}
