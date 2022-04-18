#include<stdio.h>
void input(int [100][100],int,int);
void display(int [100][100],int,int);
void maxmin(int [100][100],int,int,int *,int *);
int main()
{
	int a[100][100],row,column,p1,p2;
	printf("enter the row and column of matrix:");
	scanf("%d%d",&row,&column);
	input(a,row,column);
	printf("\nInput matrix is :\n");
	display(a,row,column);
	maxmin(a,row,column,&p1,&p2);
	printf("maximun number:%d\nminimum value:%d",p1,p2);
}
void input(int a[100][100],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[100][100],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{
		printf("%d\t",a[i][j]);
		}
		printf("\n");	
}
}
void maxmin(int a[100][100],int m,int n,int *p1,int *p2)
{
	int i,j,max=a[0][0],min=a[0][0];
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		if(a[i][j]>max)
		{
		max=a[i][j];	
		}
		else if(a[i][j]<min)
		{
			min=a[i][j];
		}
	}
}
    *p1=max;
    *p2=min;
}


