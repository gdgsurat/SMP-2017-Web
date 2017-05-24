#include<stdio.h>
#include<cs50.h>

int main()
{
    int height;
    do
    {
       printf("Height: ");
       height=GetInt();
    }
    while(height<0 || height>23);
    
    int i,space,symbol;
    for(i=height-1;i>=0;i--)
    {
        space=i;
        while(space>0)
        {
            printf(" ");
            space--;
        }
        symbol=height-i+1;
        while(symbol>0)
        {
            printf("#");
            symbol--;
        }
        printf("\n");
}
}