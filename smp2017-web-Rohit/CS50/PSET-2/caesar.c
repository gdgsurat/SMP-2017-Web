#include<stdio.h>
int main(void)
{
    int i,k;
    char q[20];
    printf("Key: ");
    scanf("%d",&k);
    printf("Plaintext: ");
    scanf("%s",q);
    char p[20];
    if(k>26)
    {
        k=k%26;
    }
    for(i=0;q[i]!='\0';i++)
    {
       p[i]=k+q[i];
       if(((p[i]>90)||(k>=26))&&(q[i]<91))
       {
           p[i]=p[i]-90+64;
       }
       else if(((p[i]>122)||(k>=26))&&(q[i]>96))
       {
           p[i]=p[i]-122+96;
       }
    }
    p[i]='\0';
    printf("Ciphertext: %s\n",p);
    return 0;
    
}
