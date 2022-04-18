#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *p1;
	p1=fopen("student.txt","w+");
	if(p1=="null")
	{
		printf("file cannot be opened:");
		exit(0);
	}
	printf("enter some character:");
	while(1)
	{
		ch=getchar();
		if(ch=='\n')
		{
			break;
		}
		fputc(ch,p1);
	}
	rewind(p1);
	while(1)
	{
		ch=fgetc(p1);
		if(ch==EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(p1);
	return 0;
}
