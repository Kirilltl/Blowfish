#ifndef BLOWFISH_DEFINES_H
#define BLOWFISH_DEFINES_H
#include <inttypes.h>
#define SUBKEY_NUMBER 18
#define SBOX_ROW_COUNT 256
#define SBOX_COLUMN_COUNT 4
void swap(uint32_t *xp, uint32_t *yp);
uint32_t P[SUBKEY_NUMBER];
uint32_t S[SBOX_COLUMN_COUNT][SBOX_ROW_COUNT];
#endif
