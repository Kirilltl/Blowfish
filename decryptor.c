#include "decryptor.h"
#include "blowfish_defines.h"
#include "blowfish_function.h"

void blowfish_decrypt(uint32_t *L, uint32_t *R, uint32_t *generated_subkey) {
    for (size_t r = 17; r > 1; r--) {
        *L = *L ^ generated_subkey[r];
        *R = f(*L) ^ *R;
        swap(L, R);
    }
    swap(L, R);
    *R = *R ^ generated_subkey[1];
    *L = *L ^ generated_subkey[0];
}