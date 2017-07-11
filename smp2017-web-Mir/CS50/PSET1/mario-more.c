#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("Height:");
    int x = get_int();
    while(x>23||x<0)
    {
        printf("Height: ");
        x = get_int();
    }

    
    int i,j;
        for(j=1;j<=x;j++)
        {
                for(i=x;i>0;i--)
                {
                    if(i<=j)
                        printf("#");
                    else
                        printf(" ");
                }
                printf("  ");
                for(i=1;i<=x;i++)
                {
                    if(i<=j)
                        printf("#");
                    
        
                }
                
                printf("\n");
            
        }
    
}
