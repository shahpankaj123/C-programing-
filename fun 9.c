#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int count(int);
int rev();
void check(int);
void arm();
int main()
{
	int choice,num,result;
	while(1)
	{
	system("cls");
	printf("***MENU DRIVEN PROGRAM***");
	printf("\n1.count number of digit in number\n2.find reverse of number\n3.check for prime or not\n4.check for armstrong or not");
	printf("\n-enter your choice:..");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter any number:");
			scanf("%d",&num);
			result=count(num);
			printf("the number of digit in number is:%d",result);
			break;
		case 2:
			result=rev();
			printf("the reverse is %d",result);
			break;
		case 3:
			printf("enter any number:");
			scanf("%d",&num);
			check(num);
			break;
		case 4:
			arm();
			break;
		default:
			printf("ERROE!!!....PLEASE ENTER VALUE BETWEEN RANGE");
			return 0;
	}
	getch();
}
}
int count(a)
{
	int sum=0;
	while(a>0)
	{
	sum=sum+1;
	a=a/10;	
	}
	return sum;
}
int rev()
{
	int a,rem,rev=0;
		printf("enter any number:");
		scanf("%d",&a);
		while(a>0)
		{
			rem=a%10;
			rev=rev*10+rem;
			a=a/10;
		}
		return rev;
}
void check(a)
{
	int i,s=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			s++;
		}
	}
	if(s==2)
	{
		printf("PRIME NUMBER");
	}
	else
	{
		printf("NOT PRIME NUMBER");
	}
}
void arm()
{
	int a,sum=0,rem,s;
	printf("enter any number:");
	scanf("%d",&a);
	s=a;
	while(a>0)
	{
		rem=a%10;
		sum=sum+pow(rem,3);
		a=a/10;
	}
	if(s==sum)
	{
		printf("ARMSTRONG NUMBER");
	}
	else
	{
		printf("NOT ARMSTRONG NUMBER");
	}
}






























