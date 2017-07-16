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

    int lb=0;
    int ub=n-1;
  while (lb <= ub)
  {
    int mid=lb+(ub-lb)/2;
    if (values[mid]==value) 
        return true;  
    else if (values[mid]<value) 
        lb=mid+1; 
     else
         ub=mid-1; 
  }
    // TODO: implement a searching algorithm
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int temp;
    for (int i=0;i<n-1;i++)
     {
      for (int j=0;j<n-i-1;i++)
       {
         if (values[j]>values[j+1]) 
          {
            temp=values[j];
            values[j]=values[j+1];
            values[j+1]=temp;
          }
        }
      }
    // TODO: implement a sorting algorithm
    return;
}
