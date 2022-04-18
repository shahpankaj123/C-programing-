#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int count(int);
int rev();
void prime(int);
void arm();
int main()
{
	    int choice;
		int result,num;
		printf("***MENU DRIVEN PROGRAM***\n");
		printf("1.count number of digit\n2.find reverse of number\n3.check for prime number\n4.check for armstrong");
		printf("\nENTER YOUR CHOICE:..");
		Scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter any number:");
			    scanf("%d",&num);
				result=count(num);
				printf("the number of digit is %d",result);
				break;
			case 2:
				result=rev();
				printf("the reverse of given number is %d",result);
				break;
			case 3:
				printf("enter any number:");
			    scanf("%d",&num);
				prime(num);
				break;
			case 4:
				arm();
				break;
			default:
				printf("ERROR!!!....PLEASE ENTER THE VALUE BETWEEN RANGE");
		}	
		getch();
		return 0;
 }
 int count(int n)
 {
 	int count=0;
 	while(n>0)
 	{
 	count=count+1;
 	n=n/10;
 }
 return count;
 }
 int rev()
 {
 	int n,rev=1,rem;
 	printf("enter any number:");
 	scanf("%d",&n);
 	while(n>0)
 	{
 		rem=n%10;
 		rev=rev*10+rem;
 		n=n/10;
	 }
	 return rev;
 }
 void arm()
 {
 	int sum=0,rem,s,a;
 	printf("enter any number");
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
	 	printf("it is armstrong number");
	 }
	 else
	 {
		printf("it is not armstrong number");
	 }	 
 }
 void prime(int n)
 {
 	int i,count=0;
 	for(i=1;i<=n;i++)
 	{
 		if(n%i==0)
 		{
 			count++;
		 }
	 }
	 if(count==2)
	 {
	 	printf("it is prime number");
	 }
	 else
	 {
	 	printf("it is not prime number");
	 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
