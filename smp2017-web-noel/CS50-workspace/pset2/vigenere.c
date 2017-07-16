#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    for(int i=0;i<strlen(argv[1]);i++)
    if(!isalpha(argv[1][i]))
     {
         printf("Usage: ./vigenere k\n");
         return 1;
     }     
    printf("plaintext: ");
    string str=get_string();
    int k,j=0; 
    printf("ciphertext: ");
    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            k=toupper(argv[1][j])-65;
            if(isupper(str[i]))
            {
                str[i]=((str[i]+k-'A')%26)+'A';
            }
            else
            {
                str[i]=((str[i]+k-'a')%26)+'a';
            }
            j++;
        }
        if(j==strlen(argv[1]))
        j=0;
        printf("%c",str[i]);
    }
    printf("\n");
}