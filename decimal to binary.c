#include<stdio.h>
void toBin(int *bin, int *dc)
{
	int i=1, rem;
	*bin=0;
	while(*dc!=0)
	{
	   rem=*dc%2;
	   *bin=*bin+(rem*i);
	   *dc=*dc/2;
	   i=i*10;
    }
}
void main()
{
	int *bin, binr, *dc, dcm; 
	dc=&dcm;
	printf("Enter a number in decimal:");
	scanf("%d", dc);
	bin=&binr;
	toBin(bin,dc);
    printf("The number in binary is: %d", *bin);
}

