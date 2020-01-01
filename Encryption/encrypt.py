def encryptLetter(letter, multKey, addKey):
    if not letter.isalpha():
        return letter
    num = ord(letter)-65
    num = ((num * multKey) + addKey) % 26
    return chr(num+65)


if __name__ == '__main__':
    message = input("Enter your message:\t\t").upper()
    multKey = int(input("Enter your multiplicative key:\t"))
    addKey = int(input("Enter your additive key:\t"))

    secret_message = ""
    for c in message:
        secret_message += encryptLetter(c, multKey, addKey)

    print("\nYour encrypted message is\n\n" + secret_message)
