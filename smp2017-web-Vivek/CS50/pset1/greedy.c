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
	while(n>=25)
	{
		count++;
		n-=25;
	}
	while(n>=10){
		count++;
		n-=10;
	}
	while(n>=5){
		count++;
		n-=5;
	}
	if (n>=1)
	{
		count=count+n;
	}
	printf("%i \n",count);
}