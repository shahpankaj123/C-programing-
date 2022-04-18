#include<stdio.h>
#include<conio.h>
int fib(int,int,int);
int main()
{
	int i,n,n1,n2,result;
	printf("enter the no. of turn");
	scanf("%d",&n);
	printf("enter the 1st term and 2nd term:");
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n;i++)
	{
		result=fib(i,n1,n2);
		printf("%d\t",result);
	}
}
int fib(i,n1,n2)
{
	if(i==0)
	{
		return n1;
	}
	else if(i==1)
	{
		return n2;
	}
	else{
		return fib(i-1,n1,n2)+fib(i-2,n1,n2);
	}
}
