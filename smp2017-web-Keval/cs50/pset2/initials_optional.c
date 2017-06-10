#include <stdio.h>

void main()
{

char name[40],firstName[20],lastName[20],middleName[20];
int i,k;

printf("Enter your name: ");

fgets (name, 40, stdin);

printf("Your name is %s",name);

i=0;
k=0;

while(name[k] != ' ')
{

firstName[i]=name[k];
i++;
k++;

}
i=0;
k++;


while(name[k] != ' ')
{

middleName[i]=name[k];
i++;
k++;

}
i=0;
k++;

while(name[k] != '\0')
{

lastName[i]=name[k];
i++;
k++;

}
printf("%c%c%c", toupper(firstName[0]), toupper(middleName[0]), toupper(lastName[0]));

}

