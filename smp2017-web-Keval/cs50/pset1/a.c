#include <stdio.h>
#include <cs50.h>
#include<string.h>

int main(void)
{
    string num;
    int k;
    do
    {
        num = GetString();
        k = strlen(num);
    }
    while(k != 13 ||((k != 15) || (k != 16)));
    int arr[k];
    for(int i = 0; i < k; i++)
    {
        arr[i] = atoi(&num[i]);
    }
}