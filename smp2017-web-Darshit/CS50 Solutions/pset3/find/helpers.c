/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int needle, int haystack[], int size)
{
    // TODO: implement a searching algorithm
    int min = 0;
    int max = size - 1;
    int mid = (min + max)/2;
    int len = max - min;
    while(len >= 0)
    {
        if(haystack[mid] == needle)
        {
            size = mid;
            return size;
            break;
        }
        else if (needle < haystack[mid])
        {
            max = mid - 1;
            mid = (max + min)/2;
            len = max - min;
        }
        else if (needle > haystack[mid])
        {
            min = mid + 1;
            mid = (min + max)/2;
            len = max - min;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int haystack[], int size)
{
    // TODO: implement an O(n^2) sorting algorithm
    for(int i = 0; i < size - 1; i++)
    {
        int min = i;
        for(int j = i+1; j < size; j++)
        {
            if(haystack[j] < haystack[min])
            {
                min = j;   
            }
        int element = haystack[min];
        if(min!=i)
        {
            haystack[min] = haystack[i];
            min = i;
            haystack[min] = element;
        }
        }
    }
    return;
}