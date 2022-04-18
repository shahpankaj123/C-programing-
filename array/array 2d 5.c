#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],i,j,m,n,sum=0;
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
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
		{
			if(i+j==m-1){
			
			sum=sum+a[i][j];
		}
		}
		printf(" the sum of main digonal %d*%d matrix is %d\n",m,n,sum);
	
	
}
