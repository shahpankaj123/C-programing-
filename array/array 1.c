#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i;
	printf("enter the value of five araay element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("the input 5 array elements are");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
