#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int l,i,suma=0,sumb=0,fl;
    int a[16];
    printf("Enter credit card number: ");
    long long n=get_long_long();
    for(i=0;i<16;i++)
        {
            a[i]=n%10;
            n/=10;
            
        }
    
    l=sizeof(a)/sizeof(a[0]);
   
   //When the number of digits is even
   
    if((l%2)==0)
    {
        for(i=0;i<l;i+=2)
        {
            if(a[i]>9)
            {
                suma+=2*(a[i]%10)+2*(a[i]/10);
            }
            else
            {
               suma+=a[i]*2;
            }
            
        }
        for(i=1;i<l;i+=2)
        {
            if(a[i]>9)
            {
                sumb+=(a[i]%10)+(a[i]/10);
            }
            else
            {
               sumb+=a[i];
            }
        }
        if((suma+sumb)%10==0)
        {
            fl=1;
        }
        else
        {
            fl=0;
        }
    }
    
    //When the number of digits is odd
    
    else
    {
        for(i=0;i<l;i+=2)
        {
            if(a[i]>9)
            {
                suma+=(a[i]%10)+(a[i]/10);
            }
            else
            {
               suma+=a[i];
            }
        }
        for(i=1;i<l;i+=2)
        {
            if(a[i]>9)
            {
                sumb+=2*(a[i]%10)+2*(a[i]/10);
            }
            else
            {
               sumb+=2*a[i];
            }
        }
        if((suma+sumb)%10==0)
        {
            fl=1;
        }
        else
        {
            fl=0;
        }
    }
    
    //To know which type of card it is and if it is a valid card
    
    if(fl==1)
    {
        if(((n>=340000000000000)&&(n<350000000000000))||((n>=370000000000000)&&(n<380000000000000)))
        {
            printf("It is a valid AMEX Card");
        }
        else if((n>=5100000000000000)&&(n<5600000000000000))
        {
            printf("It is a valid MasterCard");
        }
        else if(((n>=4000000000000)&&(n<5000000000000))||((n>=4000000000000000)&&(n<5000000000000000)))
        {
            printf("It is a valid Visa card");
        }
        else
        {
            printf("It isn't a valid card");
        }
    }
    else 
    {
        printf("It isn't a valid card");
    }
}
