#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
	int a,b,result;
	printf("enter the value of coefficient and it value:");
	scanf("%d%d",&a,&b);
	result=power(a,b);
	printf("the value is %d",result);
}
int power(int x,int y)
{
	int i,result1=1;
	for(i=1;i<=y;i++)
	{
		result1=result1*x;
	}
	return result1;
}
