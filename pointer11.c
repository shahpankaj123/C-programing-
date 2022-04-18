#include<stdio.h>
void input(int [100][100],int);
void display(int [100][100],int);
void diagonal(int [100][100],int);
int main()
{
	int a[100][100],size;
	printf("enter the size of matrix:");
	scanf("%d",&size);
	input(a,size);
	printf("\nInput matrix is :\n");
	display(a,size);
	diagonal(a,size);
}
void input(int a[100][100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[100][100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		printf("%d\t",a[i][j]);
		}
		printf("\n");	
}
}
void diagonal(int a[100][100],int n)
{
	int i,j,msum=0,rsum=0;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
		msum=msum+a[i][j];	
		}
	}
}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		if(i+j==n-1)
		{
		rsum=rsum+a[i][j];	
		}
	}
}
printf("\nThe sum of main diagonal is :%d",msum);
printf("\nThe sum of right diagonal is :%d",rsum);
}





















