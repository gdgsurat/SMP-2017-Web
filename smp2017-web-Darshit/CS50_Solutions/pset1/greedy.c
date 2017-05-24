#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main()
{
    float n;
   
    do
    {
        printf("O hai! How much change is owed?\n");
        n = GetFloat();
        n = 100 * n;
        n = round(n);
    }
    while(n<0);
    
    int coins=0;
    while(n>=25)
    {
        coins+=1;
        n=n-25;
    }
    while(n>=10 && n<25)
    {
        coins+=1;
        n=n-10;
    }
    while(n>=5 && n<10)
    {
        coins+=1;
        n=n-5;
    }
    while(n>=1 && n<5)
    {
        coins+=1;
        n=n-1;
    }
    printf("%d\n", coins);
}