#include<stdio.h>
void input(int [100][100],int,int);
void display(int [100][100],int,int);
int main()
{
	int a[100][100],row,column;
	printf("enter the value of rows and column:");
	scanf("%d%d",&row,&column);
	input(a,row,column);
	printf("the %d*%d matrix is:\n",row,column);
	display(a,row,column);
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

