#include "subkey_generator.h"
#include "blowfish_defines.h"
#include <stdio.h>

uint32_t *generate_subkeys(uint32_t *input_key, size_t input_key_size){
    uint32_t *subkeys_array = (uint32_t *)malloc(sizeof(uint32_t) * SUBKEY_NUMBER);
    for (size_t i = 0; i < SUBKEY_NUMBER; i++){
        subkeys_array[i] = P[i] ^ input_key[i % (input_key_size / 32)];
    }
    return subkeys_array;
}

