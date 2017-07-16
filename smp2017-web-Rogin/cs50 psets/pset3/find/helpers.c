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
    int beg=0;
    int end=n-1;
    int mid=(n-1)/2;
    while(beg<=mid)
    {
        
        if(value==values[mid])
        return true;
        else if(value>values[mid])
        {
            beg=mid+1;
            
        }
        else if(value<values[mid])
        {
            end=mid-1;
        }
        mid=(beg+end)/2;
    }

    // TODO: implement a searching algorithm
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(values[j]>values[j+1])
            {
                int temp=values[j];
                values[j]=values[j+1];
                values[j+1]=temp;
                flag++;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    // TODO: implement a sorting algorithm
}
