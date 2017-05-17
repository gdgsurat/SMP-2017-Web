#include<stdio.h>
#include<cs50.h>

int main()
{
    int bottle_num;
    printf("minutes: ");
    int mins=GetInt();
    bottle_num=192*mins/16;
    printf("bottles: %d\n", bottle_num);
}