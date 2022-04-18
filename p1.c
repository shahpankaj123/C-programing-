#include<stdio.h>
#include<conio.h>
void input(int *[],int ,int);
void output(int *[],int,int);
void mul(int *[],int *[],int *[],int,int,int);
int main()
{
	int a[100][100],b[100][100],c[100][100],m1,n1,m2,n2;
	printf("enter the size 1st matrix:");
	scanf("%d%d",&m1,&n1);
	printf("enter the size of 2nd matrix:");
	scanf("%d%d",&m2,&n2);
	input(a,m1,n1);
	input(b,m2,n2);
	printf("1st matrix is:\n");
	output(a,m1,n1);
	printf("2nd matrix is:\n");
	output(b,m2,n2);
	printf("multiply matrix is:\n");
	output(c,m1,n2);
}
void input(int *a[100],int m1,int n1)
{
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",(a+i)+j);
		}
	}
}
void output(int *a[100],int m1,int n1)
{
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
}
void mul(int *a[100],int *b[100],int *c[100],int m1,int n2,int n1)
{
	int i,j,k,sum;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			sum=0;
			for(k=0;k<n1;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
		printf("\n");
	}
}












