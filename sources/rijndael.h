#ifndef _RIJNDAEL_H_
#define _RIJNDAEL_H_
#include <gctypes.h>
void aes_set_key(u8 *key);
void aes_decrypt(u8 *iv, u8 *inbuf, u8 *outbuf, unsigned long long len);
void aes_encrypt(u8 *iv, u8 *inbuf, u8 *outbuf, unsigned long long len);
#endif