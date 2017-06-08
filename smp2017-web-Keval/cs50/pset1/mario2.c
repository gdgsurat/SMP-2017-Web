#include <stdio.h>

void main()
{
int i,j,k,a,n;

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
for(j=n-1;j>i;j--)
    printf(" ");
for(k=0;k<=i;k++)
    printf("#");
printf(" ");
for(a=0;a<=i;a++)
    printf("#");
printf("\n");
}
}