#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a[4]={7,55,67,54};
	char s[4][20]={"jha","shah","yadav","shres"};
	char ch[20];
	int i,j,temp;
	for(i=0;i<4;i++)
	{
	for(j=i+1;j<4;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			strcpy(ch,s[i]);
			strcpy(s[i],s[j]);
			strcpy(s[j],ch);
		}
		}	
	}
	for(i=0;i<4;i++)
	{
		printf("%s=%d\n",s[i],a[i]);
	}
}
