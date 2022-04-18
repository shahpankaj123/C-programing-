#include<stdio.h>
int digit(int);
int main()
{
	int num,result;
	printf("enter any number");
	scanf("%d",&num);
	result=digit(num);
	printf("the no. of digit is %d",result);
}
int digit(int n)
{
	int s=1;
	if(n<1)
	{
		return 0;
	}
	else
	{
	s=s+digit(n/10);	
	}
	return s;
}
