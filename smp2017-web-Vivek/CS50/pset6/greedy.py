#include cs50
def main():
	while True:
		print("O hai! How much change is owed")
		f=cs50.get_float()
		if f>=0:
			break	
	a = round(f,1)
	a = a*100;
	n = round(a,0)
	count=0;
	if n>=25:
		count+=n/25
	n=n%25
	if n>=10:
		count+=n/10
	n=n%10	
	if n>=5:
		count+=n/5
	n=n%5
	if n>=1:
		count+=n/1
	print(count)
if __name__="__main__":
	main()