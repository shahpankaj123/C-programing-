 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int *ptr,n,sum=0,i;
 	printf("Enter size of array:");
 	scanf("%d",&n);
 	ptr=(int *)calloc(n,sizeof(int));
 	if(ptr==NULL)
 	{
 		printf("ERROR!!!...");
 		exit(0);
	 }
 	for(i=0;i<n;i++)
 	{
 		printf("enter a[%d] element:",i);
 		scanf("%d",ptr+i);
	 }
 	printf("INPUT ARRAY IS :\n");
 	for(i=0;i<n;i++)
 	{
 		printf("%d\t",*(ptr+i));
	 }
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)%2!=0)
		{
			sum=sum+*(ptr+i);
		}
	 }
	 printf("\nthe sum of odd array element:%d",sum); 
 }
