/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <cs50.h>

#include "dictionary.h"
#define SIZE 100000

// Initialize the structure node
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;


node *hashtable[SIZE] = {NULL};
int count = -1;

// Define the hash function
int hash(const char* word)
{
    int hash = 0;
    int n;
    for (int i = 0; word[i] != '\0'; i++)
    {
        // alphabet case
        if (isalpha(word[i]))
        {
            n = word[i] - 'a' + 1;
        }
        
        // Apostrophe case
        else
        {
            n = 27;
        }
        
        hash = ((hash << 3) + n) % SIZE;
    }
    return hash;    
}
/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO
    // creates a temp variable that stores a lower-cased version of the word
    char temp[LENGTH + 1];
    int len = strlen(word);
    
    // Convert the word to lower alphabet characters
    for(int i = 0; i < len; i++)
    {
        temp[i] = tolower(word[i]);
    }
    temp[len] = '\0';
    
    // find what index of the array the word should be in
    int index = hash(temp);
    
    // if hashtable is empty at index, return false
    if (hashtable[index] == NULL)
    {
        return false;
    }
    
    // create cursor to compare to word
    node* checker = hashtable[index];
    
    // if hashtable is not empty at index, iterate through words and compare
    while (checker != NULL)
    {
        if (strcmp(temp, checker->word) == 0)
        {
            return true;
        }
        checker = checker->next;
    }
    
    // if you don't find the word, return false
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // Open the dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        printf("Couldn't open dictionary\n");
        return false;
    }
    
    // Load the dictionary word by word
    while(!feof(file))
    {
        node *new_node = malloc(sizeof(node));
        fscanf(file, "%s", new_node->word);
        
        // Convert the alphabets to lower case
        for(int i = 0, n = strlen(new_node->word); i < n; i++)
        {
            new_node->word[i] = tolower(new_node->word[i]);
        }
        
        // find what index of the array the word should go in
        int index;
        index = hash(new_node->word);
        
        // if hashtable is empty at index, insert
        if (hashtable[index] == NULL)
        {
            hashtable[index] = new_node;
            new_node->next = NULL;
        }
        
        // if hashtable is not empty at index, append
        else
        {
            new_node->next = hashtable[index];
            hashtable[index] = new_node;
        }      
        count++;
    }
    fclose(file);
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    if (count > 0)
    {
        return count;    
    }
    else
    {
        return 0;
    }
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    int i = 0;
    
    while(i < SIZE)
    {
        if (hashtable[i] != NULL)
        {
            node* temp = hashtable[i];
            hashtable[i] = hashtable[i]->next;
            free(temp);
            i++;
        }
        else
        {
            i++;
        }
    }
    return true;
}
