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
    // TODO: implement a searching algorithm
    
    if(n<0)
    {
        return false;
    }
    
    int min=0;
    int max=n-1;
    int mid=(min+max)/2;
    int l=max-min;
    
    while(l>=0)
    {
        if(value==values[mid])
        {
            n=mid;
            return n;
            break;
        }
        else if(value<values[mid])
        {
            max=mid-1;
        }
        else if(value>values[mid])
        {
            min=mid+1;
        }
    mid=(min+max)/2;
    l=max-min;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    
    int t;
    for(int i=0;i<(n-2);i++)
    {
        for(int j=0;j<(n-2);j++)
        {
            if(values[j]>values[j+1])
            {
                t=values[j];
                values[j]=values[j+1];
                values[j+1]=t;
            }
        }
    }
}
