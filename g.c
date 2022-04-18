#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,l,row,k;
	printf("enter any string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		while(!a[i]>='a'&&!a[i]<='z')
		{
			for(k=i;a[k]!='\0';k++)
			{
				a[k]=a[k+1];
			}
		}
	}
	puts(a);
}

