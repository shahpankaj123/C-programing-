#include<stdio.h>
#include<stdlib.h>

int main()
{
do{

system("color a");
	int userchoice,comchoice,playerscore=0,comscore=0,choice;
	printf("\t*******Papper Rock Game*********");
	printf("\n\n Enter your choice.");
	printf("\n1.sccisor");
	printf("\n2.paper");
	printf("\n3.Rock");
	printf("\n4.exist");
	scanf("%d",&userchoice);
	srand(time(0));
	comchoice=rand()%3+1;
	printf("\nuserchoice=%d",userchoice);
	printf("\ncomchoice=%d",comchoice);
	switch(userchoice)
	{



	case 1:
	 if( userchoice==1&&comchoice==2)
	{
		playerscore++;
		printf("\nyou won");
	}

	else if (userchoice==1&&comchoice==3)
	{
		comscore++;
		printf("\nyou loss");
}
	break;

	case 2:
	 if(userchoice==2&&comchoice==1)
	{
		comscore++;
		printf("\nyou loss");
	}
	else if (userchoice==2&&comchoice==3)
	{
		playerscore++;
		printf("\nyou won");
}
	break;

	case 3:
    if(userchoice==3&&comchoice==1)
	{
		playerscore++;
		printf("\nyou win");
	}
	else if (userchoice==3&&comchoice==2)
	{
		comscore++;
		printf("\nyou loss");
}
	break;
	case4:
		{
		exist(0);
		break;}
	default:
	printf("\n**error!!!** enter between the Ranges");
}
	if(userchoice==comchoice)
	{
		printf("\n**draw**");
	}


printf("\nplayerscore=%d",playerscore);
printf("\ncomscore=%d",comscore);
printf("\n\nDo you want to continue");
char ch;
scanf("%c",&ch);
}
while(ch='y'||ch='Y');
}







