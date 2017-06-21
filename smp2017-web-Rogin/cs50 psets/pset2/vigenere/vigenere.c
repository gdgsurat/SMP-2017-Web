#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,string argv[])
{
    if(argc!=2)
   { printf("Enter valid command line arguments");
   return 1;
   }
   int i,n,m;
   n=strlen(argv[1]);
    int c[n];
    for(i=0,n=strlen(argv[1]);i<n;i++)
    {
        if(!(isalpha(argv[1][i])))
        {
            printf("Enter valid command line arguements");
            return 1;
        }
        if(isupper(argv[1][i]))
        {
            c[i]=argv[1][i]-65;
        }
        else
        {
            c[i]=argv[1][i]-97;
        }
    }
    int k=0;
     printf("plaintext:  ");
     string s=get_string();
     for(i=0,m=strlen(s);i<m;i++)
     {
         if(s[i]>=65&&s[i]<=90)
         {
             if(s[i]+c[k]>90)
             {
                 s[i]=s[i]-26+c[k];
                 k++;
         if(k==n)
         k=0;
             }
             else
             {
                 s[i]=s[i]+c[k];
                 k++;
         if(k==n)
         k=0;
                 
             }
             
             
         }
         else if(s[i]>=97&&s[i]<=122)
         { 
              if(s[i]+c[k]>122)
             {
                 s[i]=s[i]-26+c[k];
                 k++;
         if(k==n)
         k=0;
             }
             else
             {
                 s[i]=s[i]+c[k];
                 k++;
         if(k==n)
         k=0;
             }
             
         }
         
     }
     printf("ciphertext: %s\n",s);
    return 0;
}
