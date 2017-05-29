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
	while(i<strlen()){
		a=(int)str[i];
		if(a>=65 && a<=90){
			b=((a-65+n)%26)+a;
			printf("%c",b );
		}

	}
	return 0;
	}
	else{
		return 1;
	}
}