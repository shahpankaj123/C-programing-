#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define pie 3.14
int main()
{
	int num,fact,a,factor,i;
	char ch,choice;
	
	do{
	system("cls");	

	printf("\n******menu driven program*******");
	printf("\nEnter your choice");
	printf("\nA.odd or even\nB.factorial\nC.prime number");
	fflush(stdin);
	scanf("%c",&choice);
	if(choice=='A'||choice=='B'||choice=='C'){
	printf("\nenter any number");
	scanf("%d",&num);}
	switch(choice)
	{
		case 'A':
			if(num%2==0){
				printf("even number");
			}
			else{
				printf("odd number");
			}

			
			break;
		case 'B':
			fact=1;
		for(i=1;i<=num;i++){
		fact=fact*i;}
		printf("the factorial is %d",fact);
			break;
		case 'C':	
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

