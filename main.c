#include "arguments_parser.h"
#include "blowfish.h"
int main(int argc, char *argv[]) {
    struct args _args;
    set_args(argc, argv, &_args);
    blowfish(_args);
    return 0;
}
