#include<stdio.h>
#include<conio.h>
int power(int,int);
int fact(int);
int main()
{
	int num,x,i,j=1;
	float result=0;
	printf("Enter the no. of term and x:");
	scanf("%d%d",&num,&x);
	for(i=1;i<=2*num;i=i+2)
	{
		result=result+j*(1.0*power(x,i)/fact(i));
		j=j*-1;
	}
	printf("the sum is %f",result);
}
int power(int a,int b)
{
	int i,sum=1;
	for(i=1;i<=b;i++)
	{
		sum=sum*a;
	}
	return sum;
}
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
