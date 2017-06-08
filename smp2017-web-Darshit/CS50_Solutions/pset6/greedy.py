import cs50

print("O hai! How much change is owed?")
n = cs50.get_float()
n = 100*n
n = round(n)
while n < 0:
    print("How much change is owed?")
    n = cs50.get_float()
    n = 100*n
    n = round(n)

coins = 0
while n >= 25:
    coins+=1
    n = n - 25
while n >= 10:
    coins+=1
    n = n - 10
while n >= 5:
    coins+=1
    n = n - 5
while n >= 1:
    coins+=1
    n = n - 1
    
print(coins)    