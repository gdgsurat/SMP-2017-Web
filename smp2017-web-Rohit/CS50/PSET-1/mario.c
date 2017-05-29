#include<stdio.h>
#include<cs50.h>
int main(void)
{
abc:printf("Enter a non negative number not greater than 23: ");
    int n=get_int();
    if((n<0)||(n>23))
    {
        printf("Error. Try again.\n");
        goto abc;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-i);j>0;--j)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("#");
        }
        printf("  ");
        for(int l=1;l<=i;l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
