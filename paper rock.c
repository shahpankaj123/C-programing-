#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{	

	int userchoice,comchoice,playerscore=0,comscore=0;
	printf("\t*******Papper Rock Game*********");
	printf("\n\n Enter your choice.");
	printf("\n1.sccisor");
	printf("\n2.paper");
	printf("\n3.Rock");
	scanf("%d",&userchoice);
	srand(time(0));
	comchoice=rand()%3+1;
	printf("\nuserchoice=%d",userchoice);
	printf("\ncomchoice=%d",comchoice);
	
	if(userchoice==comchoice)
	{
		printf("\nGame is draw");
	}
	else if( userchoice==1&&comchoice==2)
	{
		playerscore++;
		printf("\nyou won");
	}
	else if(userchoice==1&&comchoice==3)
	{
		comscore++;
		printf("\nyou loss");
	}
	else if(userchoice==2&&comchoice==1)
	{
		comscore++;
		printf("\nyou loss");
	}
	else if(userchoice==2&&comchoice==3)
	{
		playerscore++;
		printf("\nyou won");
	}
	else if(userchoice==3&&comchoice==1)
	{
		playerscore++;
		printf("\nyou win");
	}
	else if(userchoice==3&&comchoice==2)
	{
		comscore++;
		printf("\nyou loss");
	}
	else
	{
		if(userchoice>3)
		printf("\nenter the number between 1 to 3");
		}

printf("\nplayerscore=%d",playerscore);
printf("\ncomscore=%d",comscore);

}


