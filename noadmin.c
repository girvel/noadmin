#include <stdio.h>
#include <stdbool.h>
#include <sys/stat.h>

#define C_RED "\x1b[31m"
#define C_GREEN "\x1b[32m"
#define C_RESET "\x1b[0m"

void log_info(const char *str) {
    printf(C_GREEN "[INFO]" C_RESET " %s\n", str);
}

bool needs_rebuild(const char *source, const char *binary) {
    struct stat statbuf = {0};
    if (stat(
}

void rebuild_itself(const char *binary) {
    
    log_info(__FILE__);
}

int main(int argc, char **argv) {
    log_info("Initialized file structure");
    rebuild_itself(argv[0]);
    printf("  Neovim " C_GREEN "OK\n" C_RESET);
    return 0;
}
