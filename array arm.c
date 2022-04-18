#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,sum,rem,count=0,temp;
	printf("enter the range of araay ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element",i);
		scanf("%d",&a[i]);
	}
		printf("the input %d array elements are",n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		temp=a[i];
		while(a[i]>0)
		{
			rem=a[i]%10;
			sum=sum+rem*rem*rem;
			a[i]=a[i]/10;
		}
		if(sum==temp)
		{
		count++;	
		}
	}
	printf("\nno of armstrong no is %d",count);
	
	getch();
	return 0;
}
