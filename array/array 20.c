#include<stdio.h>
#include<conio.h>
int main()
{
	int AR[100],OAR[100],EAR[100],i,n,ej=0,oj=0;
	printf("enter the range of araay ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter a[%d] AR array element",i);
		scanf("%d",&AR[i]);
	}
		printf("the input %d AR array elements are\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",AR[i]);
	}
	for(i=0;i<n;i++)
	{
		if(AR[i]%2==0)
		{
			EAR[ej]=AR[i];
			ej++;
		}
		else
		{
			OAR[oj]=AR[i];
			oj++;
		}
	}
	printf("\nthe contents of OAR array is\n");
	for(i=0;i<oj;i++)
	{
		printf("%d\t",OAR[i]);
	}
		printf("\nthe contents of EAR array is\n");
	for(i=0;i<ej;i++)
	{
		printf("%d\t",EAR[i]);
	}
	getch();
	return 0;
}
