#include<stdio.h>
#include<conio.h>
int faba(int);
int main()
{
	int num,i;
	printf("enter any number");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d\t",fab(i));
	}
	getch();
	return 0;
}
int fab(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return fab(n-1)+fab(n-2);
}

