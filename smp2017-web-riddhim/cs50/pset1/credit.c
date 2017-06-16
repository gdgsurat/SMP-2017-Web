#include<stdio.h>
#include<math.h>
int main()
{
    long long int no,noo,sum2=0;
    int sum1=0,sum3=0;
    printf("Number :");
    scanf("%lld",&no);

    noo=no;
    while(no!=0)
    {
        sum1=sum1+ no%10;
        no=no/10;
        sum2 =  2*(no%10);
        while(sum2%10!=0)
        {
            sum3 = sum3+ sum2%10;
            sum2=sum2/10;
        }
        no = no/10;
    }

    sum1= sum1 +sum3;

    if(sum1%10==0)
    {
    if(noo/(long long int)(pow(10,13))==37||noo/(long long int)(pow(10,13))==34)
        printf("AMEX");
    else if(51<=noo/(long long int)(pow(10,14))&& noo/(long long int)(pow(10,13))<=55)
        printf("MASTERCARD");
    else
        printf("VALID");
    }

    else printf ("INVALID");
}