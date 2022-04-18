#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int [100][100],int ,int );
void output(int [100][100],int m2,int n2);
void sum(int [100][100],int [100][100],int [100][100],int ,int ,int );
int main()
{
	int a[100][100],b[100][100],c[100][100],m1,n1,m2,n2;
	printf("enter the row and column of 1st matrix:");
	scanf("%d%d",&m1,&n1);
	printf("enter the row and column of 2nd matrix:");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2)
	{
		printf("mulitplication doesnot occur !!!");
		exit(0);
	}
	input(a,m1,n1);
	input(b,m2,n2);
	printf("input 1st matrix is :\n");
	output(a,m1,n1);
	printf("input 2nd matrix is:\n");
	output(b,m2,n2);
	sum(a,b,c,m1,n2,n1);
	printf("The multiply of two matrix:\n");
	output(c,m1,n2);
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
void output(int b[100][100],int m1,int n1)
{
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[100][100],int b[100][100],int c[100][100],int m1,int n2,int n1)
{
   int i,j,k,s;
   for(i=0;i<m1;i++)
   {
   	for(j=0;j<n2;j++)
   	{
   		s=0;
   	   for(k=0;k<n1;k++)
		  {
   	   s=s+a[i][k]*b[k][j];
   	   
	}
	c[i][j]=s;
   }
}
}

