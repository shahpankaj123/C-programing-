#include<stdio.h>
#include<stdio.h>
void rev(char *,char *);
int main()
{
	char a[100],b[100];
	printf("enter any strings:");
	gets(a);
	rev(a,b);
	printf("The converted  string is :");
	puts(b);
	return 0;
}
void rev(char *a,char *b)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			b[i]=a[i]+32;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			b[i]=a[i]-32;
		}
		else{
			b[i]=a[i];
		}
	}
}
