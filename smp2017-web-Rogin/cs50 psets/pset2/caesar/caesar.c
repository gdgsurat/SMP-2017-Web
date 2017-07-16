#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,string argv[])
{
if(argc!=2)
{
    
printf("Enter proper command line arguement\n");
return 1;
}
long int k=atoi(argv[1]);
k=k%26;
printf("plaintext:  ");
string s=get_string();
for(int i=0,n=strlen(s);i<n;i++)
{
    if(s[i]>=65&&s[i]<=90)
    {
        if(s[i]+k>90)
        {
            s[i]=s[i]-26+k;
        }
        else
        {
            s[i]=s[i]+k;
        }
    }
    else if(s[i]>=97&&s[i]<=122)
    {
      if(s[i]+k>122)
        {
            s[i]=s[i]-26+k;
        }  
        else
        {
            s[i]=s[i]+k;
        }
    }
}
printf("ciphertext: %s\n",s);
return 0;
}