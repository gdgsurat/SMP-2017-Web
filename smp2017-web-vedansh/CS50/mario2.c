#include<stdio.h>
#include<conio.h>

void main()
{
	int a,i,j,k;
	scanf("Height : %d",a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("#");	
		}
		printf("  ");
		for(j=1;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
