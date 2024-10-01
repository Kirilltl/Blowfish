#ifndef BLOWFISH_DECRYPTOR_H
#define BLOWFISH_DECRYPTOR_H
#include <inttypes.h>
void blowfish_decrypt(uint32_t *L, uint32_t *R, uint32_t *generated_subkey);
#endif
