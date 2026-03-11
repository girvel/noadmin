#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/stat.h>

#define NOB_IMPLEMENTATION
#define NOB_EXPERIMENTAL_DELETE_OLD
#define NOB_REBUILD_URSELF(binary_path, source_path) \
    "cc", "-x", "c", "-Wall", "-Wextra", "-Werror", "-o", binary_path, source_path
#include "nob.h"

#define C_RED "\x1b[31m"
#define C_GREEN "\x1b[32m"
#define C_RESET "\x1b[0m"

int main(int argc, char **argv) {
    nob_minimal_log_level = NOB_ERROR;
    NOB_GO_REBUILD_URSELF(argc, argv);

    printf("  Neovim " C_GREEN "OK\n" C_RESET);
    return 0;
}
