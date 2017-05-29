#include <stdio.h>
#include <cs50.h>
void main()
{
	float f;
	do{
		printf("O hai! How much change is owed\n");
		f=get_float();
	}while(f<0);
	float n = roundf(f * 10) / 10;
	n=n*100;
	int count=0;
	if(n>=25)
	{
		count+=n/25;
	}
	n=n%25;
	if(n>=10)
	{
		count+=n/10;
	}
	n=n%10;	
	if(n>=5)
	{
		count+=n/5;
	}
	n=n%5;	
	if(n>=1)
	{
		count+=n/1;
	}
	printf("%i\n",count);
}
