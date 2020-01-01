[comment]: <> (TODO import C implementation)
[comment]: <> (TODO remove nonalpha chars and split into 4-char words)

# Simple Cipher Encryption

This code will encrypt and decrypt messages using a
simple [affine cipher](https://en.wikipedia.org/wiki/Affine_cipher).

---
## Python

* `encrypt.py`
* `decrypt.py`

When running, the programs prompt the user for the message and the cipher keys. They then print the encrypted/ decrypted message in all caps to the console. 

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
