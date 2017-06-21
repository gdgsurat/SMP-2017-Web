#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
float a;
printf("O hai! How much change is owed?\n");
a=get_float();
while(a<0.00)
{
printf("How much change is owed?\n");
a=get_float();
}
int c=round(a*100);
int x=0;
x=x+c/25;
c=c%25;
x=x+c/10;
c=c%10;
x=x+c/5;
c=c%5;
x=x+c;
printf("%d\n",x);
return 0;
}