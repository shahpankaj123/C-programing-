#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],i,j,m,n,sum;
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

		for(i=0;i<m;i++){
		sum=0;
			for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
	
	}
	printf("\n the %d row of %d*%d matrix is %d\n",i+1,m,n,sum);
}
	
		
	
	}
	
