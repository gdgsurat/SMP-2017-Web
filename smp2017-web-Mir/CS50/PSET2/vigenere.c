#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int f;
    string k = argv[1];
    if((argc<2)||(argc>2))
    {
        printf("Error!!!");
        return 1;
    }    
    
    for(f=0; k[f]!='\0'; f++)
    {
        if(!isalpha(k[f]))
        {
            printf("Error!!!");
            return 1;
        }
    }
    
        
    printf("plaintext: ");
    string plain = get_string();
    
    int i, x, y, z;
    y=0;
    for (i=0; plain[i]!='\0'; i++)
    {  
        
        if((plain[i]<91)&&(plain[i]>64)) //between ASCII values of 'A' and 'Z'
        {
            if(k[y]=='\0')
                y = 0;
                
            if(k[y]>95)
            {
                z = k[y] - 97;
            }
            else
            {
                z = k[y] - 65;
            }    
            if((plain[i]+z)>90)
            {
                x = (plain[i] + z) % 90;
                x = x % 26;
                plain[i] = 64 + x;
            }
            else
            {
                plain[i] = plain[i] + z;
            }
            y++;
            
            
            
        }
           
        
        else if((plain[i]<123)&&(plain[i]>96)) //between ASCII values of 'a' and 'z'
        {
             if(k[y]=='\0')
                y = 0;
                
            if(k[y]>95)
            {
                z = k[y] - 97;
            }
            else
            {
                z = k[y] - 65;
            } 
                
            if(plain[i]+z>122)
            {
                x = (plain[i] + z) % 122;
                x = x % 26;
                plain[i] = 96 + x;
            }
            else
            {
                plain[i] = plain[i] + z;
            }
            y++;
             
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

