/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"


/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int mid, left, right;
    
    if( n < 0)
        return false;
    else
    {
        left = 0;
        right = n - 1;
        while(left <= right)
        {    
            mid = left + ((right - left)/2);
            
            if( values[mid] > value)
                right = mid - 1;
            else if( values[mid] < value)
                left = mid + 1;
            else 
                return true;
                    
                    
        }
        
        return false;
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int i, j, num;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {  
            if(values[j]>values[j+1])
            {  
                num = values[j];
                values[j] = values[j+1];
                values[j+1] = num;
            }    
        }
    }
    return;
}
