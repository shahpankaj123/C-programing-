#include<stdio.h>
#include<conio.h>
void input(int [100][100],int,int);
void output(int [100][100],int,int);
void sum(int [100][100],int,int);
int main()
{
	int a[100][100],m,n;
	printf("enter the row and column of matrix:");
	scanf("%d%d",&m,&n);
	input(a,m,n);
	output(a,m,n);
	sum(a,m,n);
	getch();
	return 0;
}
void input(int a[100][100],int m1,int n1)
{
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void output(int a[100][100],int m1,int n1)
{
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[100][100],int m1,int n1)
{
	int i,j,sum1=0;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
		sum1=sum1+a[i][j];	
		}
	}
	printf("sum of element of matrix:%d",sum1);
}
