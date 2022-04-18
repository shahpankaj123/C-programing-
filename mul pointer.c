#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
void input(int [100][100],int,int);
void output(int [100][100],int,int);
void mul(int [100][100],int [100][100],int [100][100],int,int,int);
int main()
{
	int a[100][100],b[100][100],c[100][100],m1,n1,m2,n2;
	printf("enter the size of 1st matrrix:");
	scanf("%d%d",&m1,&n1);
	printf("enter the size of 2nd matrix:");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2)
	{
		printf("error....!");
		exit(0);
	}
	input(a,m1,n1);
	input(b,m2,n2);
	printf("1st matrix:\n");
	output(a,m1,n1);
	printf("2nd matrix:\n");
	output(b,m2,n2);
	mul(a,b,c,m1,n2,n1);
	printf("multipled matrix:\n");
	output(c,m1,n2);
}
void input(int a[100][100],int m1,int n1)
{
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",(*(a+i)+j));
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
			printf("%d\t",*(*(b+i)+j));
		}
		printf("\n");
	}
}
void mul(int a[100][100],int b[100][100],int c[100][100],int m1,int n2,int n1)
{
	int i,j,k,sum;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			sum=0;
			for(k=0;k<n1;k++)
			{
				sum=sum+*(*(a+i)+k) * *(*(b+k)+j);
			}
		        *(*(c+i)+j)=sum;
		}
	}
}

















