/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
 
#include<stdio.h>
#include<stdint.h>
#include<string.h>
<<<<<<< HEAD
#include<cs50.h>
=======
>>>>>>> 1258fbe5086ef1a0dabbc3f268afb8708f079603

typedef uint8_t BYTE;

int main(void)
{
    //open card.raw
    FILE *inptr = fopen("card.raw", "r");
    
    if (inptr == NULL)
    {
        printf("Could not open card.raw.\n" );
        return 2;
    }
    
    //Set a pointer for output files
    FILE *ouptr = NULL;

    int count = 0;
    uint8_t buffer[512];
    
    //iterate till the input file is being read
    while(fread(buffer, 512, 1, inptr))
    {
        
        //check whether a new jpeg is started or not
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1))
        {
<<<<<<< HEAD
=======
           
>>>>>>> 1258fbe5086ef1a0dabbc3f268afb8708f079603
            if(ouptr != NULL)
            {
                fclose(ouptr);
            }
           
            char name[15];
            sprintf(name, "%03d.jpg", count);
            
            ouptr = fopen(name, "w");
            
            count ++;
        }
        
        if(ouptr != NULL)
        {
            //write in the jpeg file
            fwrite(buffer, 512, 1, ouptr);
        }
    
        if (feof(inptr) != 0)
        {
            break;
        }
    }
    
    //close the output file when EOF is reached
    if(ouptr != NULL)
    {
        fclose(ouptr);
    }
    
    //close the input file
    fclose(inptr);
    
    return 0;
}
