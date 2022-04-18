#include<stdio.h>
void input(int [100][100],int size);
void output(int [100][100],int size);
void sum(int [100][100],int [100][100],int [00][100],int size);
int main()
{
	int a[100][100],b[100][100],c[100][100],size;
	printf("enter the size of matrix:");
	scanf("%d",&size);
	input(a,size);
	input(b,size);
	printf("input 1st matrix is :\n");
	output(a,size);
	printf("input 2nd matrix is:\n");
	output(b,size);
	sum(a,b,c,size);
	printf("The sum of two matrix:\n");
	output(c,size);
	return 0;
}
void input(int a[100][100],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void output(int b[100][100],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[100][100],int b[100][100],int c[100][100],int size)
{
   int i,j;
   for(i=0;i<size;i++)
   {
   	for(j=0;j<size;j++)
   	{
   	c[i][j]=a[i][j]+b[i][j];	
	}
   }
}








