#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
int main(void)
{
    printf("Enter your name: ");
    string a=get_string();
    printf("Initials: %c",toupper(a[0]));
    for(int i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
           printf("  %c",toupper(a[i+1])); 
        }
    }
}
