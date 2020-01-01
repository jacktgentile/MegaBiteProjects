[comment]: <> (TODO import C and Python implementations)
[comment]: <> (TODO remove nonalpha chars and split into 4-char words)

# Simple Cipher Encryption

This code will encrypt and decrypt messages using a simple [affine cipher](https://en.wikipedia.org/wiki/Affine_cipher).

### Matlab

Relevant files:  `encrypt.m` `decrypt.m`

The above files are both function files. The code below is an example of how to call the functions. After executing, `decMsg` will have the same value as `origMsg`.
```
origMsg = 'Meet at the old oak tree at midnight.';
encMsg = encrypt(origMsg, 5, 13);
decMsg = decrypt(encMsg, 5, 13);
```
