#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
        // take only a single command line arguement as an integer for the key
    if (argc != 2 || atoi(argv[1]) < 1)
    {
        printf(" input the key along with command \n");
        return 1;
    }
    else
    {
        // convert string to integer
        int k = atoi(argv[1]);
            
        // take the plain text input from the user
        string plaintext = GetString();
            
        // iterate i to encrypt each character of plain text by key k
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (isupper(plaintext[i]))
            {
                // formula for caesar cipher is valid when a or A have 0 value
                printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
            }
            else if(islower(plaintext[i]))
            {
                printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
            }
            else
            {
                // print the characters other than alphabets as they are
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
}