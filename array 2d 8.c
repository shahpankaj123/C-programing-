#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],i,j,m,n,max;
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
	printf(" the %d*%d matrix is\n",m,n);
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	max=a[0][0];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
		{
			if(a[i][j]>max){
			
			max=a[i][j];
		}
		}
		printf(" the highest element of %d*%d matrix is %d\n",m,n,max);
	}
	
	
