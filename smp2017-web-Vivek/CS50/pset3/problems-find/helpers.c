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
    // TODO: implement a Binary searching algorithm

	int start=0,end=n-1,mid;
	while(start<=end){
		mid=(start+end)/2;
		if (a[mid]==value)
		{
			return true;
		}
		else if(a[mid]>value){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a Selection sorting algorithm
    int min;
	for (int i = 0; i < n-1; ++i)
	{
		min=i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[min]>a[j]){
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
/*	Let's have Bubble sort algo	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
*/
    return;
}
