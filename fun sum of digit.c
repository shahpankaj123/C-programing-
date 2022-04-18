#include<stdio.h>
int sum(int);
int main()
{
	int num,result;
	printf("enter any number");
	scanf("%d",&num);
	result=sum(num);
	printf("the sum of all digit is %d",result);
	
}
int sum(int n)
{
	int s;
	if (n<1)
	{
	return 0;
}
	else
	{
	s=n%10+sum(n/10);
}
    return s;
}
