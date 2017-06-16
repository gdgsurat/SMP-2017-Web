#include <stdio.h>
#include <math.h>

void main()
{

int checksum,checksum1=0,checksum2=0,l=0,k,sum=0;

long int n,number,no;

printf("Enter the credit card number:");
scanf("%ld",&n);

number = n;
no=n;


while(number>0)
{

number=number/10;
l++;

}

printf(" length is %d\n",l);

while(n>0)
{

checksum1 = checksum1 + n%10;
n = n/10;


checksum1 = checksum1 + 0;
n = n/10;

}

printf("odd position sum is %d\n",checksum1);

while(no>0)
{
sum = 0;
checksum2 = checksum2 + 0;
no = no/10;

k=2*(no%10);
while(k>0)
{

sum = sum + k%10;
k = k / 10;

}
checksum2 = checksum2 + sum;
no = no/10;

}

printf("even position sum is %d\n",checksum2);

checksum = checksum1 + checksum2;
printf("checksum is %d\n",checksum);

if(checksum%10!=0)
    printf("\nINVALID check\n");

if(checksum%10==0)
{
if(l==16)
    {
    if(n/(long int)pow(10,15)==4)
        printf("\nVISA \n");
    else if(50<n/(long int)pow(10,14)<56)
        printf("\nMASTER CARD\n");
    else
        printf("\nINVALID 16\n");
}

if(l==15)
{

if(n/(long int)pow(10,14)==4)
    printf("\nVISA\n");
else if(n/(long int)pow(10,13)==37)
    printf("\nAMEX\n");
else if(n/(long int)pow(10,13)==34)
    printf("\nAMEX\n");
else
    printf("\nINVALID 15\n");

}

if(l==14)
{

if(n/(long int)pow(10,13)==4)
    printf("\nVISA\n");
else
    printf("\nINVALID 14\n");

}

if(l==13)
{

if(n/(long int)pow(10,12)==4)
    printf("\nVISA\n");
else
    printf("\nINVALID 13\n");
}


}


}