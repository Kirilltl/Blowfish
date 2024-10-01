#ifndef BLOWFISH_ENCRYPTOR_H
#define BLOWFISH_ENCRYPTOR_H
#include <inttypes.h>
void blowfish_encrypt(uint32_t *L, uint32_t *R, uint32_t *generated_subkey);
#endif
