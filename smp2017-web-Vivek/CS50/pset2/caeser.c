#include <stdio.h>
#include <cs50.h>
int main()
{
	int n=get_int();
	if(n!=NULL){
	printf("plaintext: ");
	string str=get_string();
	int i=0;
	int a,b;
	printf("\nciphertext: ");
	while(i<strlen(str)){
		a=(int)str[i];
		if(a>=65 && a<=90){
			b=((a-65+n)%26)+a;
			printf("%c",b );
		}
		else if(a>=97 && a<=122){
			b=((a-97+n)%26)+a;
			printf("%c",b );
		}
		else{
			printf("%c",b);
		}
		i++;
	}
	return 0;
	}
	else{
		return 1;
	}
}