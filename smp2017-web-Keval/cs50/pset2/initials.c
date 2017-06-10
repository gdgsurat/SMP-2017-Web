#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{

char name[40];
int i=0,j,k;

printf("Enter your name: ");

fgets (name, 40, stdin);

while(name[i] != ' ')
{
i++;
}

i++;
j=i;

while(name[i] != ' ')
{
i++;
}

i++;
k=i;

printf("%c%c%c", toupper(name[0]), toupper(name[j]), toupper(name[k]));

}