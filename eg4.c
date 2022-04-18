#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define pie 3.14
int main()
{
	int num,fact,a,factor,i;
	char ch;
	
	do{
		
	int choice;
	printf("\n******menu driven program*******");
	printf("\nEnter your choice");
	printf("\n1.odd or even\n2.factorial\n3.prime number");
	scanf("%d",&choice);
	if(choice<=3){
	printf("\nenter any number");
	scanf("%d",&num);}
	switch(choice)
	{
		case 1:
			if(num%2==0){
				printf("even number");
			}
			else{
				printf("odd number");
			}

			
			break;
		case 2:
			fact=1;
		for(i=1;i<=num;i++){
		fact=fact*i;}
		printf("the factorial is %d",fact);
			break;
		case 3:	
		factor=0;
		for( i=1;i<=num;i++){
			if(num%i==0)
		
		{
			factor++;
		}
	}
		if(factor==2)
		{
			printf("prime number");
		}
		else{
			printf("not prime number");
		}
			break;
		
		default:
			printf("error!!!...\nplease enter the value between 1 to 4");
			
			
	}
fflush(stdin);
printf("\nDo you want to continue(y/n)");
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
	
}
