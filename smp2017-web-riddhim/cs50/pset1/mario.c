#include<stdio.h>

int main()
{
    int i,j,height;
    printf("Height :");
    scanf("%d",&height);
    for(i=1;i<=height;i++)
    {
        for(j=1;j<=height-i;j++)
        printf(" ");

        for(j=1;j<=i+1;j++)
        printf("#");

        printf("\n");
    }

}