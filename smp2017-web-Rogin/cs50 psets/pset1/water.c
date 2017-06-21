#include<stdio.h>
#include<cs50.h>
int main(void)
{
int m;
do
{
    printf("Minutes: ");
    m=get_int();
}while(!(m>=0));
printf("Bottles: %d",12*m);
return 0;
}
