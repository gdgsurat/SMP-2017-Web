#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{

char name[1000];
int i=0,a,b,c;

printf("Enter your name: ");

fgets (name, 1000, stdin);
while(name[i] == ' ')
{
i++;
}
a=i;
while(name[i] != ' ')
{
i++;
}

while(name[i] == ' ')
{
i++;
}
b=i;

while(name[i] != ' ')
{
i++;
}

while(name[i] == ' ')
{
i++;
}
c=i;

printf("%c%c%c", toupper(name[a]), toupper(name[b]), toupper(name[c]));

}