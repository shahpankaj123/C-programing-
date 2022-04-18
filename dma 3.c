#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void input(int *,int);
void display(int *,int);
void swap(int *,int);
int main()
{
	int *ptr,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf("error!!!..");
		exit(0);
	}
	input(ptr,n);
	printf("input array is:\n");
	display(ptr,n);
	swap(ptr,n);
	printf("\nswaped array is:\n");
	display(ptr,n);
}
void input(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:",i);
		scanf("%d",&ptr[i]);
	}
}
void display(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
void swap(int *ptr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	
}







