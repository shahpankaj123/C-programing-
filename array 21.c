#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,nsum=0,psum=0,sum=0;
	float avg;
	printf("enter the range of araay ");
	scanf("%d",&n);
	printf("enter the %d array element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("the input %d array elements are",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			psum=psum+a[i];
		}
		else
		{
			nsum=nsum+a[i];
		}
		sum=sum+a[i];
	}
	avg=((float)sum/n);
		printf("the sum of all positive number is %d",psum);
			printf("the sum of all negative number is %d",nsum);
	printf("the average of all input number is %f",avg);
	getch();
	return 0;
}
