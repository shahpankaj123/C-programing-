#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char name[50];
	char address[50];
	char faculty[50];
};
int main()
{
	int i;
	struct student std[5];
	FILE *fp;
	fp=fopen("student.txt","a+");
	if(fp==NULL)
	{
		printf("file cannot open:");
		exit(0);
	}
	for(i=0;i<5;i++)
	{
		printf("\nenter name:");
		gets(std[i].name);
		printf("\nenter your address:");
		gets(std[i].address);
		printf("\nenter your facult:");
		gets(std[i].faculty);
		fwrite(&std[i],sizeof(std[i]),1,fp);
	}
	rewind(fp);
	for(i=0;i<5;i++)
	{
		fread(&std[i],sizeof(std[i]),1,fp);
		if(strcmp(std[i].address,"ktm")==0)
		{
			printf("\n name=%s",std[i].name);
		}
	}
	fclose(fp);
	return 0;
	getch();
}
