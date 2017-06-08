#include <stdio.h>

void main()
{
int i,j,k,n;

flag:

printf("Height: ");
scanf("%d",&n);

if(n<0||n>23)
{
printf("Retry...\n\n\n");
goto flag;
}


for(i=0;i<n;i++)
{
for(j=n;j>i+1;j--)
    printf(" ");
for(k=0;k<i+2;k++)
    printf("#");
printf("\n");
}

}