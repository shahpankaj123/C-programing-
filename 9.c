int main()
{
	int i,j,k,row,num;
	scanf("%d",&num);
	row=num/2+1;
	printf("the pattern is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<=row-1-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
