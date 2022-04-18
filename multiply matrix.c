#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],sum,k,i,j,m1,n1,m2,n2;
	printf("enter the row and coloumn of first matrix");
	scanf("%d%d",&m1,&n1);
	printf("enter the row and coloumn of second matrix");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2)
	{
		printf("cannot be multiply");
		exit(0);
	}
	else
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("enter a[%d][%d] element",i,j);
				scanf("%d",&a[i][j]);
			}
		}
			for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("enter b[%d][%d] element",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		printf("the first %d*%d matrix is \n",m1,n1);
			for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
			printf("the second %d*%d matrix is \n",m2,n2);
			for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				sum=0;
				for(k=0;k<n1;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
		printf("\n the multipied %d*%d matrix is\n",m1,n2);
			for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
	}
	}
		
	
}
