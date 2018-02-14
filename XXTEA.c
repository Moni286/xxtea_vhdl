#include <stdint.h>
#define DELTA 0x9e3779b9
#define MX (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[(p&3)^e] ^ z)))

/*
  MX: -- a function of z, y, e, sum, key
    x1 = (z >> 5) ^ (y << 2)
    x2 = (y >> 3) ^ (z << 4)

    a1 = sum ^ y
    key_word_index = (p & 3) ^ e
    a2 = key[key_word_index] ^ z

    x = x1 + x2
    a = a1 + a2

    return x ^ a
*/

void xxtea_encrypt(uint32_t *words,  // plaintext
  int n,                   // number of 32-bit words
  uint32_t const key[4])   // 128-bit key
{
  uint32_t y, z, sum;
  unsigned p, rounds, e;

  rounds = 6 + 52/n;
  sum = 0;
  z = words[n-1];                     // z = last word
  do {                                // FN loop start
    sum += DELTA;                     // add magic number to sum
    e = (sum >> 2) & 3;               // e = right shift sum by 2, AND with 0x00000003
    for (p=0; p<n-1; p++) {           // for number of words (sub-loop) -- could be unrolled if n is predetermined
      y = words[p+1];                 // y = right neighbor of [word p]
      z = words[p] += MX;             // z = [word p] + MX, [word p] += MX
    }                                 // end for sub-loop
    y = words[0];                     // y = first word
    z = words[n-1] += MX;             // z = last word + MX, [word p] += MX
  } while (--rounds);
}
  
void xxtea_decrypt(uint32_t *words,  // plaintext
  int n,                   // number of 32-bit words
  uint32_t const key[4])   // 128-bit key
{
  uint32_t y, z, sum;
  unsigned p, rounds, e;
  
  rounds = 6 + 52/n;
  sum = rounds*DELTA;
  y = words[0];
  do {
    e = (sum >> 2) & 3;
    for (p=n-1; p>0; p--) {
      z = words[p-1];
      y = words[p] -= MX;
    }
    z = words[n-1];
    y = words[0] -= MX;
    sum -= DELTA;
  } while (--rounds);
}

void xxtea_encrypt_128(uint32_t words[4],  // plaintext
  uint32_t const key[4])   // 128-bit key
{
  uint32_t y, z, sum;
  unsigned rounds, e;
  unsigned i;

  rounds = 19;
  sum = 0;
  z = words[3];                     // z = last word
  do {                                // FN loop start
    sum += DELTA;                     // add magic number to sum
    e = (sum >> 2) & 3;               // e = right shift sum by 2, AND with 0x00000003

    y = words[1];
    z = words[0] += (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[e] ^ z)));

    y = words[2];
    z = words[1] += (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[1^e] ^ z)));

    y = words[3];
    z = words[2] += (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[2^e] ^ z)));

    y = words[0];
    z = words[3] += (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[3^e] ^ z)));

  } while (--rounds);
}

void xxtea_decrypt_128(uint32_t words[4], uint32_t const key[4]){
  uint32_t y, z, sum;
  unsigned p, rounds, e;
  
  rounds = 19;
  sum = rounds*DELTA;
  y = words[0];
  do {
    e = (sum >> 2) & 3;

    z = words[2];
    y = words[3] -= (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[3^e] ^ z)));

    z = words[1];
    y = words[2] -= (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[2^e] ^ z)));

    z = words[0];
    y = words[1] -= (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[1^e] ^ z)));

    z = words[3];
    y = words[0] -= (((z>>5^y<<2) + (y>>3^z<<4)) ^ ((sum^y) + (key[e] ^ z)));

    sum -= DELTA;
  } while (--rounds);
}





