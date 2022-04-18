#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int num,i;
	float result;
	printf("enter the number of series:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		result=result+(1.0/fact(i));
	}
	printf("the sum of %d series is %f",num,result);
}
int fact(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
