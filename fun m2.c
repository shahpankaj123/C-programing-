#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void palin(int);
void oddeven();
int factorial();
int sum(int);
int main()
{
	int choice;
	do
	{
		system("cls");
	int num,result;
	printf("\n****MENU DRIVEN PROGRAM****");
	printf("\n1.palindrome\n2.oddeven\n3.factorial\n4.sum of natural number\n5.exit");
	printf("\n\nENTER YOUR CHOICE:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter any number");
			scanf("%d",&num);
			palin(num);
			break;
		case 2:
			oddeven();
			break;
		case 3:
			result=factorial();
			printf("the facorial is %d",result);
			break;
		case 4:
			printf("enter any number");
			scanf("%d",&num);
			result=sum(num);
			printf("the sum of number is %d",result);
			break;
		case 5:
			exit(0);
		default:
			printf("ERROR!!!..PLEASE ENTER THE VALUE BETWEEN RANGE");
	}
	getch();
	}while(1);
}
void palin(int a)
{
	int rem,f=0,s;
	s=a;
	while(a>0)
	{
		rem=a%10;
		f=f*10+rem;
		a=a/10;
	}
	if(f==s)
	{
		printf("it is palindrome number");
	}
	else
	{
		printf("it is not palindrome number");
	}
}
void oddeven()
{
	int b;
	printf("enter any number:");
	scanf("%d",&b);
	if(b%2==0)
	{
		printf("EVEN NUMBER");
	}
	else
	{
		printf("ODD NUMBER");
	}
}
int factorial()
{
	int i,a,fact=1;
	printf("enter any number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int sum(int a)
{
	int i,sum=0;
	for(i=0;i<=a;i++)
	{
		sum=sum+i;
	}
	return sum;
}





























































  
