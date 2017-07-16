#include<stdio.h>
#include<cs50.h>
int main(void)
{
int r;
do
{
printf("Height: ");
r=get_int();
}while(r<0||r>23);
for(int i=0;i<r;i++)
{
for(int j=r-1;j>i;j--)
printf(" ");
for(int k=0;k<=i+1;k++)
printf("#");
printf("\n");
}
return 0;
}