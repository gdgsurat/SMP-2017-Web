#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string str=get_string();
    char ini[5];
    int k=1;
    ini[0]=toupper(str[0]);
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i-1]==' ')
         {
            ini[k]=toupper(str[i]);
            k++;
         }
    }
    printf("%s\n",ini);
}