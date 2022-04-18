#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	int a,b;
	float result;
	printf("Enter any two number");
	scanf("%d%d",&a,&b);
	result=add(a,b);
	printf("the sum is %f",result);
	result=sub(a,b);
	printf("\nthe substraction is %f",result);
	result=mul(a,b);
	printf("\nthe multiplication is %f",result);
	result=div(a,b);
	printf("\nthe sum is %f",result);
}
int add(x,y)
{
	return x+y;
}
int sub(x,y)
{
	return x-y;
}
int mul(x,y)
{
	return x*y;
} 
int div(x,y)
{
	return ((float)(x/y));
}


