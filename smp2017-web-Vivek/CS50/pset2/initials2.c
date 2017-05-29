#include <stdio.h>
#include <cs50.h>
#include <string.h>
void main()
{
	string str=get_string();
	int l;
	if(str[0]!=' '){
	l=strlen(str);
	putchar (toupper(str[0]));
	for(i=0;i<l;i++){
		if(str[i]==' '){
			putchar (toupper(str[i+1]));
		}
	}
	else{
		for(i=0;i<l;i++){
			if(str[i]==' '&& str[i]!=' '){
			putchar (toupper(str[i+1]));
			}
		}
	}
}