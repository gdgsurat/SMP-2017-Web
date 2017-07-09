#include <stdio.h>
#include <stdint.h>
typedef uint8_t BYTE;

int main (int argc, char* argv[])
{
	if(argc!=2)
	{
		fprintf(stderr, "Usage ./recover imagefile\n");
		return 1;
	}

	FILE *inptr=fopen(argv[1],"r");
	FILE *optr=NULL;

	if(inptr==NULL)
	{
		fprintf(stderr, "Could not open.\n");
		return 2;
	}

	BYTE buff[512];
	int counter=0;

	while(fread(buff,512,1,inptr))
	{
		if(buff[0]==0xff && buff[1]==0xd8 && buff[2]==0xff)
		{
			int flag=0;
			for(int n=0xe0 ; n<=0xef ; n++)
			{
				if(buff[3]==n)
				{
					flag=1;
					break;
				}
			}
		
			if(flag==1)
			{
				if(optr!=NULL)
					fclose(optr);
	
				char name[20];
				sprintf(name,"%03d.jpeg",counter);
				counter++;
				optr=fopen(name,"w");
			}
		}
		if(optr!=NULL)
			fwrite(buff,512,1,inptr);

		if(feof(inptr)!=0)
			break;

	}

	if(optr!=NULL)
		fclose(optr);

	fclose(inptr);

	return 0;
}
