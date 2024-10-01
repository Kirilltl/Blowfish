#ifndef BLOWFISH_SUBKEY_GENERATOR_H
#define BLOWFISH_SUBKEY_GENERATOR_H
#include <inttypes.h>
#include <stdlib.h>
uint32_t *generate_subkeys(uint32_t *input_key, size_t input_key_size);
#endif
