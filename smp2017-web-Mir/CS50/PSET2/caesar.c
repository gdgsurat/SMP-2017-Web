#include<stdio.h>
#include<cs50.h>

int main(int argc, string argv[])
{
    if((argc<2)||(argc>2))
    {
        printf("Error!!!");
        return 1;
    }
    
    string k = argv[1];
    int j = atoi(k);
    
    printf("plaintext: ");
    string plain = get_string();
    
    int i, x;
    for (i=0; plain[i]!='\0'; i++)
    {  
        if((plain[i]<91)&&(plain[i]>64)) //between ASCII values of 'A' and 'Z'
        {
            if((plain[i]+j)>90)
            {
                x = (plain[i] + j) % 90;
                x = x % 26;
                plain[i] = 64 + x;
            }
            else
            {
                plain[i] = plain[i] + j;
            }
        }
        
        else if((plain[i]<123)&&(plain[i]>96)) //between ASCII values of 'a' and 'z'
        {
            if(plain[i]+j>122)
            {
                
                
                x = (plain[i] + j) - 122;
                
            
                x = x % 26;
                
                plain[i] = 96 + x;
            }
            else
            {
                plain[i] = plain[i] + j;
            }
        }
    }
    
    printf("ciphertext:");
    for(i=0; plain[i]!='\0'; i++)
    {
        printf("%c", plain[i]);
    }
    printf("\n");
    return 0;
}
