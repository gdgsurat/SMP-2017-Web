#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<cs50.h>
int main(int argc, char* argv[])
{
    if(argc!=2)
    {
        printf("./vigenere <keyword>\n");
        return 1;
    }
    
    int i,n[20]={0},ck=0,cq=0;
    char q[20];
    string k=argv[1];
    for(i=0;k[i]!='\0';i++)
    if(!isalpha(k[i]))
    {
       return 1;
       exit(0);
    }
    printf("Plaintext: ");
    scanf("%s",q);
    char p[20];
    
    
    for(i=0;k[i]!='\0';i++)
    {
        if(k[i]<91)
        {
           n[i]=k[i]-65;
        }
        else if(k[i]>96)
        {
            n[i]=k[i]-97;
        }
    }
    
    for(ck=0;k[ck]!='\0';ck++){}
    ck++;
    
    for(cq=0;q[cq]!='\0';cq++){}
    cq++;
    
    if(ck!=cq)
    {
        for(int j=0;i<=cq;i++,j++)
        {
            n[i]=n[j];
        }
    }
        
    
    for(i=0;q[i]!='\0';i++)
    {
       p[i]=n[i]+q[i];
       if((p[i]>90)&&(q[i]<91))
       {
           p[i]=p[i]-90+64;
       }
       else if((p[i]>122)&&(q[i]>96))
       {
           p[i]=p[i]-122+96;
       }
    }
    p[i]='\0';
    printf("Ciphertext: %s\n",p);
    return 0;
}
