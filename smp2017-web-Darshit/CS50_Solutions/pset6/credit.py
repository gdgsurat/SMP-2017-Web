import cs50

def isamex(m):
    p = str(m)
    length = len(p)
    if length is 15:
        if ord(p[0])-48 is 3 and (ord(p[1])-48 is 4 or ord(p[1])-48 is 7):
            return True
        else:
            return False
    else:
        return False
        
def ismcrd(m):
    p = str(m)
    length = len(p)
    if length is 16:
        if ord(p[0])-48 is 5 and (ord(p[1])-48 is 1 or 2 or 3 or 4 or 5):
            return True
        else:
            return False
    else:
        return False
        
def isvisa(m):
    p = str(m)
    length = len(p)
    if length is 13 or 16:
        if ord(p[0])-48 is 4:
            return True
        else:
            return False
    else:
        return False

def isnum(g):
    n = str(g)
    leng = len(n)
    sum = [0] * 2
    for i in range(2, leng + 1, 2):
        x = (-1 * i)
        t = n[x]
        y = int(ord(t) - 48)
        y = y * 2
        if y < 10:
            sum[0] += int(y)
        else:
            r = y % 10
            y = y // 10
            sum[0] += r + y
    for j in range(1, leng + 1, 2):
        j = -1 * j
        r = int(n[j])
        z = ord(n[j]) - 48
        z = int(z)
        if z // 10 == 0:
            sum[1] += int(z)
        else:
            r = z % 10
            z = z // 10
            sum[1] += r + z
    chck = sum[0] + sum[1]
    if chck % 10 == 0:
        return True
    else:
        return False

def main():
    numb = cs50.get_float();
    numb = int(numb)
    if isnum(numb):
        if isamex(numb):
            print('AMEX')
        elif ismcrd(numb):
            print('MASTERCARD')
        elif isvisa(numb):
            print('VISA')
        else:
            print('INVALID')
    else:
        print("INVALID")


if __name__ == '__main__':
    main()
