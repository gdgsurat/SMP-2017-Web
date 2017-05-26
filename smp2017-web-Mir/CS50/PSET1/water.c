#include<stdio.h>
#include<cs50.h>

int main(void)
{
        int b;
        printf("Minutes: ");
        int minutes = get_int();
        b = minutes * 12; 
        printf("Bottles: %i", b);
        
}
