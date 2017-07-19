#include<stdio.h>

void main()
{
	printf("O hai ! How much change is owed ?\n");
	float t;
	int b=0;
	c:
	scanf("%f",&t);
	if(t<0){
		printf("How much change is owed ? : ");
		goto c;
	}
	t*=100;
	int a=t;
	b=a/25;
	a=a%25;	
	b+=a/10;
	a=a%10;
	b+=a/5;
	a=a%5;
	b+=a;
	printf("%d",b);
	getch();
}
