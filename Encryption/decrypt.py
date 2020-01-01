def decryptLetter(letter, multKey, addKey):
    if not letter.isalpha():
        return letter
    num = ord(letter)-65
    num = ((num + addKey) * multKey) % 26
    return chr(num+65)


if __name__ == '__main__':
    message = input("Enter your message:\t\t").upper()
    multKey = int(input("Enter your multiplicative key:\t"))
    addKey = int(input("Enter your additive key:\t"))

    invList = [1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25];
    multInv = invList[multKey-1];
    addInv = 26 - addKey;

    secret_message = ""
    for c in message:
        secret_message += decryptLetter(c, multInv, addInv)
    print("\nYour decrypted message is\n\n" + secret_message)
