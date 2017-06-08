#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long long two, add;
    int sum;
    
    do
    {
        printf("Enter credit card number:\n");
        long long i = get_long_long();
    }
    while(i<0);       

   int addsum = 0;
    for(add=i; add>0; add=add/100)
        addsum = addsum + (add % 10);

    int prod = 0;
    for(two=i/10; two>0; two=two/100)
    {
        if(2*(two%10)>9)
        {
            prod = prod + ((2 * (two % 10)) / 10);
            prod = prod + ((2 * (two % 10)) % 10);
        }
        else
            prod = prod + (2 * (two % 10));
    }
    
    sum = addsum + prod;

    if(sum%10==0)
    {   
        if ((i>=340000000000000&&i<3500000000000000)||(i>370000000000000&&i<380000000000000))
            printf("AMEX\n");
        else if (i>=5100000000000000&&i<5600000000000000)
            printf("MASTERCARD\n");
        else if ((i>=4000000000000&&i<5000000000000)||(i>=4000000000000000&&i<5000000000000000))
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");

    return 0;
}
