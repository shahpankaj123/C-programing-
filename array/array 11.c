#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,osum=0,esum=0;
	printf("enter the range of array");
	scanf("%d",&n);
	printf("enter the %dth array element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			esum=esum+a[i];
		}
		else
		{
			osum=osum+a[i];
		}
	}
	printf("sum of all even number in array  is %d",esum);
	printf("\nsum of all odd number in array is %d",osum);
	getch();
	return 0;
}
