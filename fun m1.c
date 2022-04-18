#include<stdio.h>
#include<conio.h>
void pal(int);
void oddeven();
int fact();
int sum(int);
int main()
{
	int choice,n,result;
	printf("***menu driven program***");
	printf("\n\n1.palindrome number\n2.check oddeven\n3.factorial\n4.sum of natural number\n5.exit");
	printf("\nenter your choice");
	scanf("%d",&choice);
	
		switch(choice)
{
	case 1:
		{
		printf("enter any number");
		scanf("%d",&n);
		 pal(n);
		break;
		}
	case 2:
	{
	 oddeven();
		break;
		}
	case 3:
		{
			result=fact(n);
			printf("the factorial is %d",result);
			break;
		}
	case 4:
		{
		printf("enter any number");
		scanf("%d",&n);
			result=sum(n);
			printf("\nThe sum of %d term is %d",n,result);	
		}
	case 5:
	{
		exit(0);
	}
	default:
	{
		printf("errror!!... enter value between ranges");
	}
}
	
		
}
 void pal(int a)
{
	int rem,sum=1,y;
	y=a;
	while(a>0);
	{
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	}
	if(sum==y)
	{
		printf("it is palindrome number");
		
	}
	else
	{
		printf("not palindrome number");
	}
}
void oddeven()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("it is even number");
	}
	else
	{
		printf("it is odd number");
	}
}
int fact(int b)
{
	printf("enter any number");
	scanf("%d",&b);
	int i,fac=1;
	for(i=0;i<=b;i++)
	{
		fac=fac*i;
	}
	return fac;
}
int sum(int c)
{
	int i,sum=0;
	for(i=0;i<=c;i++)
	{
		sum=sum+i;
	}
	return sum;
}
