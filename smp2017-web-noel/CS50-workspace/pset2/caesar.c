#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    printf("plaintext: ");
    string str=get_string();
    int k = atoi(argv[1]);
    printf("ciphertext: ");
    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            if(isupper(str[i]))
            str[i]=((str[i]+k-'A')%26)+'A';
            else
            str[i]=((str[i]+k-'a')%26)+'a';
        }
        printf("%c",str[i]);
    }
    printf("\n");
}