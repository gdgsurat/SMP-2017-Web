#include cs50
def main():
k=cs50.get_string()
if Not(k==NULL):
print("plaintext: ",end"")
str=cs50.get_string()
i=0,j=0
print("\nciphertext: ")
while(i<len(str)):
	a=(int)str[i]
	x=(int)(k[j])
	if x>=97 and x<=122 :
		x=x-32
	else:
		x=x
	if a>=65 and a<=90 :
		b=((a-65+x-65)%26)+a
		print(b,end"")
	elif a>=97 and a<=122:
		b=((a-97+x-65)%26)+a
		printf(b,end"")
	else:
		print(b,end"")
		j--
	i++
	j++
	j=j%(len(k))
exit 0

else:
	print("\nError")
	exit 1

if __name__="__main__":
	main()