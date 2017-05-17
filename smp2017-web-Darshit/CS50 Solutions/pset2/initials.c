#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Get the name from the user
    string name = GetString();
    
    // Print the initial of first name
    printf("%c", toupper(name[0]));
    
    // Iterate and print the first character of the other word
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        // Print the character that is immediately next to the space character
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}