#include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int choice;
	 float num1,num2,Result;
 	printf("***Mini calculator***");
 	printf("\n\n-enter your choice");
 	printf("\n1.addition\n2.substraction\n3.multiplication\n4.division\n5.exist");
 	scanf("%d",&choice);
 	if(choice<=4){
 	printf("\nenter any two number");
 	scanf("%f%f",&num1,&num2);}
 	switch(choice)
 	{
 		case 1:
 			Result=num1+num2;
 			break;
 		case 2:
		 	Result=num1-num2;
		 	break;
		 case 3:
		 	Result=num1*num2;
		 	break;
		 case 4:
		 	Result=num1/num2;
		 	break;
		 case 5:
		 	exit(0);
		default:
			printf("\nError!!!...\nPlease enter you choice between 1 to 5");
		 	
	 }
	 printf("\n\nThe Result is %.2f",Result);
 }


