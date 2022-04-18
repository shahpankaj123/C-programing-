#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],k,b[50];
	int i,p,j;
	printf("enter the string:\n");
	gets(a);
	printf("the strings is :\n");
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		p=0;
		k=a[i];
		if(k!='?')
		{
		for(j=0;a[j]!='\0';j++)
		{
			if(k==a[j]||k==a[j]+32||k==a[j]-32)
			{
				p++;
				a[j]='?';
			}	
		}
		if(k!=' ')
		printf("\nthe frequency of %c is %d",k,p);	
}
}
}


