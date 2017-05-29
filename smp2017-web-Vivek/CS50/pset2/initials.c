#include <stdio.h>
#include <cs50.h>
#include <string.h>
void main()
{
	string str=get_string();
	int l=strlen(str);
	putchar (toupper(str[0]));
	for(i=0;i<l;i++){
		if(str[i]==' '){
			putchar (toupper(str[i+1]));
		}
	}
}