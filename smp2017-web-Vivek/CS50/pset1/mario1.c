#include<stdio.h>
#include<cs50.h>
void main()
{
	printf("Height:")
	int n=get_int();
	while(n<0 || n>23){
		printf("Height :");
		n=get_int();
	}
	int i,j;
	for(i=1;i<=n;i++{
		for(j=i;j<n;j++){
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			printf("#");
		}
		printf("  ");
		for(k=1;k<=i;k++){
			printf("#");
		}
		printf("\n");
	}
}
}