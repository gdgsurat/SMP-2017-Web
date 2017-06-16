#include<stdio.h>
#include<cs50.h>
void main(){
	long long num=get_long_long():
	long long a,dig,x=0;
	a=num;
	while(num>0){
		dig++;
		num/=10;
	}
	num=a;
	while(num>0){
		dig=num%10;
		x=x*10+dig;
		num/10;
	}
	long long fdig=x%10;
	long long sdig=[(x/10)%10]*10+fdig;
	long long sum1=0,c=1,reqd=0;
	while(x>0){
		if (c%2==0)
		{
			reqd=(x%10)*2;
			if (reqd>9)
			{
				while(reqd>0){
					sum1+=reqd%10;
					reqd/=10;
				}
			}
			else{
				sum1=reqd;
			}
		}
		else{
			sum1+=(x%10);
		}
		x/=10;
		c++;
	}
if (sum1%10 !=0)
	{
		printf("INVALID");
	}
else{
	if (dig==15 &&(sdig==34||sdig==37))
		{
			printf("AMEX");
		}
	else if (dig==16 && (sdig==51||sdig==52||sdig==53||sdig==54||sdig==55))
		{
			printf("MASTERCARD");
		}
	else if ((dig==13 || dig==16) &&fdig==4)
		{
			printf("VISA");
		}
	}
}