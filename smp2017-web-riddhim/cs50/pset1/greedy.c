#include<stdio.h>
#include<math.h>
int main()
{
    float change;
    int count=0;
    printf("Hey ! How much change is owed ? \n");
    scanf("%f",&change);

    while(change>1)
    {
        change -=1;
    }
    int cent = 100*change;
    while(cent/25>=1)
    {
        count++;
        cent -= 25;
    }
    while(cent/10>=1)
    {
        count++;
        cent -= 10;
    }
    while(cent/5>=1)
    {
        count++;
        cent -= 5;
    }
    while(cent/1>=1)
    {
        count++;
        cent -= 1;
    }

    printf("%d",count);

}