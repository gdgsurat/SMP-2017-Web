#include <stdio.h>

void main()
{

float c;
int number,change;

flag:

printf("O hai! How much change is owed?\n");
scanf("%f",&c);

if(c<0)
{
printf("Retry...\n\n\n");
goto flag;
}

change = c*100;
number=0;

while(change>0)
{

number=number+change/25;
change=change%25;

number=number+change/10;
change=change%10;


number=number+change/5;
change=change%5;


number=number+change/1;
change=change%1;

}

printf("Minimum no. of coins required is %d\n",number);

}