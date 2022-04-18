#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n;
	printf("enter the range of  araay ");
	scanf("%d",&n);
	printf("enter the %dth array element",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("the element of array present on even position  are ");
	for(i=0;i<n;i=i+2)
	{
	
		printf("\n%d",a[i]);
	}
	getch();
	return 0;
}
