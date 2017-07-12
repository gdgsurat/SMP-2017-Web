import cs50
def main():
print("Height:",end"")
n=cs50.get_int()

while True:
	if n>=0 and n<=23:
		break
	else:
		print("Height:",end"")
		n=cs50.get_int()

for i in range n:
	for j in range(i,n):
		print(" ",end"")	
	for k in range(1,i):
		print("#",end"")
	print("#\n")
	
if __name__="__main__":
	main()