/**
 * copy.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }

    // remember filenames
    int n = atoi(argv[1]);
    char* infile = argv[2];
    char* outfile = argv[3];
    
    if(n > 100 || n < 1)
    {
        printf("integer between 1 and 100\n");
        return 4;
    }
    
    // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }
    

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf, out_bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);
    out_bf = bf;

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi, out_bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);
    out_bi = bi;
    
    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
    
    int oldpadding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
	out_bi.biWidth = bi.biWidth * n;
	out_bi.biHeight = bi.biHeight * n;
    
    
    // determine padding for scanlines
    int padding =  (4 - (out_bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    out_bf.bfSize = 54 + (out_bi.biWidth * abs(out_bi.biHeight) * sizeof(RGBTRIPLE)) + (abs(out_bi.biHeight) * padding);
    out_bi.biSizeImage = (out_bi.biWidth * abs(out_bi.biHeight) * sizeof(RGBTRIPLE)) + (abs(out_bi.biHeight) * padding);
    
    // write outfile's BITMAPFILEHEADER
    fwrite(&out_bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&out_bi, sizeof(BITMAPINFOHEADER), 1, outptr);
    
    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        for(int a = 0; a < n; a++)
        {
            // iterate over pixels in scanline
            for (int j = 0; j < bi.biWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                for(int b = 0; b < n; b++)
                {
                    // write RGB triple to outfile
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }
            }
            
            fseek(inptr, oldpadding, SEEK_CUR);
            
            // then add it back (to demonstrate how)
            for (int k = 0; k < padding; k++)
            {
                fputc(0x00, outptr);
            }
            
            if( a < n - 1)
            fseek(inptr, -((bi.biWidth * 3) + oldpadding), SEEK_CUR);
        }
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // that's all folks
    return 0;
}
