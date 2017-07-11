#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Get a single input as the command line argument as the key
    if (argc != 2)
    {
        printf("./vigenere <keyword>\n");
        return 1;
    }
    else 
    {
        // Get  alphabetic input only as the command line argument as the key
        string k = argv[1];
        int keylength = strlen(k);
        for (int j = 0; j < keylength; j++)
        {
            if (!(isalpha(k[j])))
            {
                printf("Use only alphabets\n");
                return 1;
            }
        }
        
        // Get input from the user as the plain text
        string plaintext = GetString();
        int n = strlen(plaintext);
        
        // to encrypt ith letter in the plain text by jth alphabet of key
        for (int i = 0, j = 0; i < n; i++)
        {
            // if the alphabet in key is capital
            if (isupper(k[j]))
            {
                int keyupper = k[j] - 'A';
                if (isupper(plaintext[i]))
                {
                    // formula of vigenere cipher is valid when A or a as 0
                    printf("%c", (plaintext[i] - 'A' + keyupper) % 26 + 'A');
                    j++;
                }
                else if (islower(plaintext[i]))
                {
                    printf("%c", (plaintext[i] - 'a' + keyupper) % 26 + 'a');
                    j++;
                }
                else
                {
                    // print the characters other than alphabets as they are
                    printf("%c", plaintext[i]);
                }
            }
            // if alphabet in key is a lower case letter
            else if (islower(k[j]))
            {
                int keylower = k[j] - 'a';
                if (islower(plaintext[i]))
                {
                    printf("%c", (plaintext[i] - 'a' + keylower) % 26 + 'a');
                    j++;
                }
                else if (isupper(plaintext[i]))
                {
                    printf("%c", (plaintext[i] - 'A' + keylower) % 26 + 'A');
                    j++;
                }
                else
                {
                    printf("%c", plaintext[i]);
                }
            }
                
            // rounding to the first letter in key as the last one is reached
            if (j >= keylength)
            {
                j = 0;    
            }
        }
        printf("\n");
        return 0;
    }
        
}