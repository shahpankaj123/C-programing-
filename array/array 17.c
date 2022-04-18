
#include<conio.h>
int main()
{
	int a[100],b[100],i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\ncopied array is:");
		for(i=0;i<n;i++)
		{
			printf("%d\t",b[i]);
		}
	}
