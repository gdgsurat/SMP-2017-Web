import cs50

print("Height: ", end="")
height = cs50.get_int()
while height < 0 or height > 23:
    print("Height: ", end="")
    height = cs50.get_int()

for i in range(height):
    space = height - i - 1
    while space > 0:
        print(" ", end="")
        space-=1
    
    symbol = i+2
    while symbol > 0:
        print("#", end="")
        symbol-=1
    
    print()
    
    