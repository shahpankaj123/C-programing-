#include<stdio.h>
void input(int [100][100],int,int);
void display(int [100][100],int,int);
void sum(int [100][100],int,int);
int main()
{
	int a[100][100],row,column;
	printf("enter the value of rows and column:");
	scanf("%d%d",&row,&column);
	input(a,row,column);
	printf("the %d*%d matrix is:\n",row,column);
	display(a,row,column);
	sum(a,row,column);
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
void sum(int a[100][100],int m,int n)
{
	int i,j,osum=0,esum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			{
				esum=esum+a[i][j];
			}
			else{
				osum=osum+a[i][j];
			}
		}
	}
		printf("\nsum of even number in matrix is :%d",esum);
		printf("\nsum of eodd number in matrix is :%d",osum);
	
}









