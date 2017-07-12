#include cs50
def main():
n=cs50.get_int();
if Not(n==None):
    print("plaintext: ",end"")
    str=cs50.get_string()
    i=0,a=0
    print("\nciphertext: ",end"")
    while(i<len(str)):
        a=int(str[i])
        if a>=65 and a<=90:
            b=((a-65+n)%26)+a
            printf(b,end"" )
        elif a>=97 and a<=122 :
            b=((a-97+n)%26)+a
            print(b,end"")
        else:
            print(b,end"");
        i++
    exit(0)
else:
	exit 1

if __name__=="__main__":
    main()