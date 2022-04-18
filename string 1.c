#include<stdio.h>
#include<conio.h>
int main()
{
	char a[100],b[100];
	printf("enter your name:\n");
	gets(a);
	printf("enter your adress:\n");
	gets(b);
	printf(" Your name is %s and address is %s",a,b);
	getch();
	return 0;
}
