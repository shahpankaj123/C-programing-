#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n;
	printf("enter the range of araay ");
	scanf("%d",&n);
	printf("enter the %d array elements are",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("the input %d array elements in reverse order are ",n);
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
