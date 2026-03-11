#include <stdio.h>

#define C_RED "\x1b[31m"
#define C_GREEN "\x1b[32m"
#define C_RESET "\x1b[0m"

void log_info(const char *str) {
    printf(C_GREEN "[INFO]" C_RESET " %s\n", str);
}

int main(int argc, char **argv) {
    log_info("Initialized file structure");
    // build_yourself()
    printf("  Neovim " C_GREEN "OK\n" C_RESET);
    return 0;
}
