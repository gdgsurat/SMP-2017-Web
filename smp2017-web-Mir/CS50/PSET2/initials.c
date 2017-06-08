#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    string name=get_string();
    
    char c;
    int length = strlen(name);
    
    if(name[0] != ' ' && name[0] != '\0') 
    {   
        c = toupper(name[0]);
        printf("%c", c);
    }
    
    for(int i = 0; i < length; i++)     
    {          
        if(name[i] == ' ' && i + 1 < length && name[i + 1] != ' ')
        {
            c = toupper(name[i+1]);
            printf("%c", c);
            
        }
    }
    printf("\n");
}
