#include "arguments_parser.h"
#include <string.h>
int32_t set_args(size_t argc, char **argv, struct args *_args_placeholder){
    struct args _args;
    _args.text_mode_flag = 1;
    _args.decrypt_mode_flag = 0;
    _args.input_file_path = "C:\\Users\\79112\\OneDrive\\Рабочий стол\\blowfish_ofb\\plain_text.txt";
    _args.key_size = 64;
    uint32_t default_key[2] = {
            0x4aa2e5cf,
            0x151b25df
    };
    _args.key = default_key;
    _args.ecb_flag = 1;
    _args.dir = argv[0];
    return 0;
}