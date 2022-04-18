#include<stdio.h>
#include<conio.h>
int add();
int main()
{
	int result;
	result=add();
    printf("the product is :%d",result);
}
  int add()
	{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	return a*b;
	
}
