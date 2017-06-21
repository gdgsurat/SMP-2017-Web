#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(void)
{
string s;
s=get_string();
if(s[0]>=97)
s[0]=s[0]-32;
printf("%c",s[0]);
int f=0;
for(int i=0,n=strlen(s);i<n;i++)
{
if(s[i]==' ')
{
f++;
continue;
}
if(f!=0)
{
f=0;
if(s[i]>=97)
s[i]=s[i]-32;
printf("%c",s[i]);
}

}
printf("\n");
return 0;
}