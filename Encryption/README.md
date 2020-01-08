[comment]: <> (TODO import C implementation)
[comment]: <> (TODO remove nonalpha chars and split into 4-char words)

# Simple Cipher Encryption

This code will encrypt and decrypt messages using a
simple [affine cipher](https://en.wikipedia.org/wiki/Affine_cipher).

---
## C

* `encrypt.c`
* `decrypt.c`

To compile, use the command below in the terminal.
```
gcc encrypt.c -o encrypt
```

The C version of the program converts a text file from plaintext to ciphertext and back again. To run the code, use the structure below, where `message.txt` already contains the plaintext message, and `cipher.txt` will be created, if it does not already exist.
```
./encrypt <multiplicative key> <additive key> message.txt cipher.txt
```

---
## Python

* `encrypt.py`
* `decrypt.py`

When running, the programs prompt the user for the message and the cipher keys. They then print the encrypted/ decrypted message in all caps to the console. This version was written on Python 3.7.2.

---
## Matlab

* `encrypt.m`
* `decrypt.m`

The above files are both function files. The code below is an example of how to
call the functions. After executing, `decMsg` will be an uppercase version of `origMsg`.
```
origMsg = 'The Knights Who Say Ni demand a sacrifice!';
encMsg = encrypt(origMsg, 5, 13);
decMsg = decrypt(encMsg, 5, 13);
```
