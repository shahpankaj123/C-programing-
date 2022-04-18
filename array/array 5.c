#include<conio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,sum=0;
	float avg;
	printf("enter the range of  araay");
	scanf("%d",&n);
	printf("enter the %dth array element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=((float)sum/n);
	printf("the average of array element is %f",avg);
	getch();
	return 0;
}
