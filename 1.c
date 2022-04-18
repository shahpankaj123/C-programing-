#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,m,n,sum;
	printf("enter the no of row amd coloumb");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d] element",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter b[%d][%d] element",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf(" the 1st %d*%d matrix is\n",m,n);
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
		printf(" the 2nd %d*%d matrix is\n",m,n);
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
printf(" the sum of two matrix is\n");
		for(i=0;i<m;i++){

			for(j=0;j<n;j++)
			
		{
			printf("%d\t",a[i][j]+b[i][j]);

	}
	printf("\n");

}
printf("the substraction of two matrix is\n");
		for(i=0;i<m;i++){

			for(j=0;j<n;j++)
			
		{
			printf("%d\t",a[i][j]-b[i][j]);

	}
	printf("\n");

}

	
		
	
	}
	
