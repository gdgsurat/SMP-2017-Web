import cs50

while True:
	print("Height:",end"")
	n=cs50.get_int()
	if n>=0 and n<=23:
		break

for i in range n:
	for j in range(i,n):
		print(" ",end"")	
	for k in range(1,i):
		print("#",end"")
	print("  ",end"")
	for k in range(1,i):
		print("#")
	print("\n")
