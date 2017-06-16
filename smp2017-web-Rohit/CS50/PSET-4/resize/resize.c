/**
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 3)
    {
        fprintf(stderr, "Usage: ./resize infile outfile\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[1];
    char *outfile = argv[2];

    // open input file 
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf,out_bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);
    out_bf=bf;

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi,out_bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);
    out_bi=bi;

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
    
    printf("By how many times do you want to resize the image?: ");
    int n;
    scanf("%d",&n);
    
     // determine padding for scanlines
    int padding1 = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    out_bi.biWidth = n * bi.biWidth;
    out_bi.biHeight = n * bi.biHeight;
    
    int padding2 = (4- (out_bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    out_bf.bfSize= 54 + (out_bi.biWidth*abs(out_bi.biHeight)*sizeof(RGBTRIPLE)) + (abs(out_bi.biHeight)*padding2); //14+40 for BITMAPFILEHEADER & BITMAPINFOHEADER from infile
    out_bi.biSizeImage= (out_bi.biWidth*abs(out_bi.biHeight)*sizeof(RGBTRIPLE)) + (abs(out_bi.biHeight)*padding2);

    // write outfile's BITMAPFILEHEADER
    fwrite(&out_bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&out_bi, sizeof(BITMAPINFOHEADER), 1, outptr);

  
    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        //for repeating a scanline as many times as n
        for(int b = 0 ; b < n ; b++)
        {
            // iterate over pixels in scanline
            for (int j = 0; j < bi.biWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                // write RGB triple to outfile
                for(int a = 0 ; a < n ; a++)
                {
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }
            }

            // skip over padding, if any
            fseek(inptr, padding1 , SEEK_CUR);

            // then add it back (to demonstrate how)
            for (int k = 0; k < padding2; k++)
            {
                fputc(0x00, outptr);
            }
            
          if( b < n - 1)//n-1 because file cursor has to return to the beginning of the scanline only those many times
            fseek(inptr , -(bi.biWidth * 3 + padding1), SEEK_CUR);//3 for the 3 bytes representing each colour
        }
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}