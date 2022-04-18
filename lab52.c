#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define pie 3.14
int main()
{
	float radius,length,breadth,area,perimeter,volume;
	char ch;
	
	do{
		
	int choice;
	printf("\n******menu driven program*******");
	printf("\nEnter your choice");
	printf("\n1.area of circle\n2.area of rectangle\n3.perimeter of rectangle\n4.volume of sphere");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the radius of circle");
			scanf("%f",&radius);
			area=pie*pow(radius,2);
			printf("the area of circle is %f",area);
			break;
		case 2:
			printf("enter the length and breath of rectangle");
			scanf("%f%f",&length,&breadth);
			area=length*breadth;
			printf("the area of rectangle is %f",area);
			break;
		case 3:	
			printf("enter the length and breath of rectangle");
			scanf("%f%f",&length,&breadth);
			perimeter=2*(length+breadth);
			printf("the perimeter of rectangle is %f",perimeter);
			break;
		case 4:
			printf("enter the radius of sphere");
			scanf("%f",&radius);
			volume=(4.0/3)*pie*pow(radius,3);
				printf("the volume of sphere is %f",volume);
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
