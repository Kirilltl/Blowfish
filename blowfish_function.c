#include "blowfish_function.h"
#include "blowfish_defines.h"
uint32_t f (uint32_t x){
    uint32_t h = S[0][x >> 24] + S[1][x >> 16 & 0xff];
    uint32_t h1 = ( h ^ S[2][x >> 8 & 0xff] ) + S[3][x & 0xff];
    return h1;
}