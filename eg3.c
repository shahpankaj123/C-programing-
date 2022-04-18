#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define pie 3.14
int main()
{
	int num,sum,a,count,i,rem,rev;
	char ch;
	
	do{
	system("cls");	
	int choice;
	printf("\n******menu driven program*******");
	printf("\nEnter your choice");
	printf("\n1.sum of digit\n2.count number of digit\n3.reverse number\n4.palindrome number");
	scanf("%d",&choice);
	if(choice<=4){
	printf("\nenter any number");
	scanf("%d",&num);}
	switch(choice)
	{
		case 1:
			sum=0;
			while(num>0){
			rem=num%10;
			sum=sum+rem;
			num=num/10;	
			}
		printf("the sum of digit is %d",sum);	
			break;
		case 2:
			count=0;
		while(num>0){
			count++;
			num=num/10;
		}
		printf("the number of digit is %d",count);
			break;
		case 3:	
		rev=0;
		while(num>0){
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
		}
		printf("the reverse of number is %d",rev);
			break;
		case 4:
			rev=0;
			a=num;
		while(num>0){
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
		}
		if(rev==a){
			printf("palindrome number");
		}
		else{
			printf("not palindrome number");
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

