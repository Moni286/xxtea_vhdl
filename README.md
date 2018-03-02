# XXTEA-128 - VHDL Implementation

## How It Works

XXTEA is implemented with the intent to work on a 128-bit plaintext and key. It has four distinct modules:

1. Sum Module: generates the sums for encryption/decryption by adding delta each round.
2. Key Module: returns the appropriate key for the current round to the feistel network.
3. Feistel Network: main logic, where the data is manipulated and has been divided into four individual steps. This is a pipelining step to allow for saving of the text in between round logic and rounds themselves.
4. Round Counter: keeps count of which round it is.


## Testbench

In the case of this testbench, it encrypts when signal `dec = 0`, and decrypts when `dec = 1`. The correct plaintext/encrypted text will show up after round 0x13 finishes.

This testbench has been tested and the ciphertext is able to be correctly decrypted to produce the original plaintext. 
