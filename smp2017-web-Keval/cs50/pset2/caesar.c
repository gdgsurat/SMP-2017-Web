#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc,char *argv[])
{

if(argc!=2)
    printf("Error!!!\n\nRetry.....\n\nnumber of command line argument should not be other than 2\n");
else
{
int k=atoi(argv[1]);

int i,n;
char text[100],code[100];

fgets(text, 100, stdin);

n = strlen(text);

k = text[2];

printf("%d",text[2]);

}

}