#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float m=get_float();
    int n,c;
    n=m*100;
    c=n/25;
    n=n%25;
    c=c+n/10;
    n=n%10;
    c=c+n/5;
    n=n%5;
    c=c+(n/1);
    printf("%i\n",c);
}