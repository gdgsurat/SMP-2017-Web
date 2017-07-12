import cs50

# while True:
print("Enter a non negative number not greater than 23: ", end="")
n=cs50.get_int()
    # if n>0:
        # break;
        
for i in range(1,n+1):
    for j in range(n-i,0,-1):
        print(" ", end="")
    for k in range(1,i+1):
        print("#", end="")
    print("  ",end="")
    for l in range(1,i+1):
        print("#",end="")
    print("\n",end="")
        
            
