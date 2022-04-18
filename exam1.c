#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,num,sum=0;
printf("enter the no. of multiplica");
scanf("%d",&num);
while(i<=num)
{
	sum=sum+i;
	if(sum==num)
	{
		break;
	}
	i=i+1;
	
}
if(sum==num)
{
	printf("triangular");
}
else{
		printf("not triangular");
}
}
