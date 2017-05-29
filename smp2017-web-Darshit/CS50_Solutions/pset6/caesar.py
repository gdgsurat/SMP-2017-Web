import cs50
import sys

if len(sys.argv) is not 2:
    print('Please provide the key')
    exit(1)
else:
    key = int(sys.argv[1])
    print("plaintext: ", end="")
    ptext = cs50.get_string();
    ctext = ""
    for char in ptext:
        if char.isalpha():
            if char.isupper():
                x = (ord(char) + key - 65) % 26 + 65
            elif char.islower():
                x = (ord(char) + key - ord('a')) % 26 + ord('a')
            c = chr(x)
            ctext += c
        else:
            ctext += char
    print("ciphertext:",ctext)      
    exit(0)