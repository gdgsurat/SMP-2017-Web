#include <stdio.h>
#include <cs50.h>
int main()
{
	string k=get_string();
	if(k!=NULL){
	printf("plaintext: ");
	string str=get_string();
	int i=0;
	int a,b,x;
	printf("\nciphertext: ");
	j=0;
	while(i<strlen(str)){
		a=(int)str[i];
		x=(int)(k[j]);
		if (x>=97 && x<=122)
		{
			x=x-32;
		}
		else
		{
			x=x;
		}
		if(a>=65 && a<=90){
			b=((a-65+x-65)%26)+a;
			printf("%c",b );
		}
		else if (a>=97 && a<=122)
		{
			b=((a-97+x-65)%26)+a;
			printf("%c",b );
		}
		else{
			printf("%c",b);
			j--;
		}
		i++;
		j++;
		j=j%(strlen(k));
	}
	return 0;
	}
	else{
		printf("\nError");
		return 1;
	}