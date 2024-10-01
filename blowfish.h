#ifndef BLOWFISH_BLOWFISH_H
#define BLOWFISH_BLOWFISH_H
#include <inttypes.h>
#include <stdlib.h>

struct args{
    size_t text_mode_flag;
    size_t decrypt_mode_flag;
    char *input_file_path;
    size_t key_size;
    uint32_t *key;
    size_t ecb_flag;
    char *dir;
};
void blowfish(struct args _args);
#endif
