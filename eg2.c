#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define pie 3.14
int main()
{
	float radius,length,breadth,area,perimeter,volume;
	char ch,choice;
	
	do{
	system("cls");	

	printf("\n******menu driven program*******");
	printf("\nEnter your choice");
	printf("\nA.area of circle\nB.area of rectangle\nC.perimeter of rectangle\nD.volume of sphere");
	fflush(stdin);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'A':
			printf("enter the radius of circle");
			scanf("%f",&radius);
			area=pie*pow(radius,2);
			printf("the area of circle is %f",area);
			break;
		case 'B':
			printf("enter the length and breath of rectangle");
			scanf("%f%f",&length,&breadth);
			area=length*breadth;
			printf("the area of rectangle is %f",area);
			break;
		case 'C':	
			printf("enter the length and breath of rectangle");
			scanf("%f%f",&length,&breadth);
			perimeter=2*(length+breadth);
			printf("the perimeter of rectangle is %f",perimeter);
			break;
		case 'D':
			printf("enter the radius of sphere");
			scanf("%f",&radius);
			volume=(4.0/3)*pie*pow(radius,3);
				printf("the volume of sphere is %f",volume);
				break;
		default:
			printf("\nerror!!!...\nplease enter the value between 1 to 4");
			
			
	}
fflush(stdin);
printf("\nDo you want to continue(y/n)");
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
	
}

