#include <stdio.h>
#include <string.h>
#include "../include/59_myfile.h"

char * sgs_clib_strrchr(const char *str, int c) {
    return strrchr(str, c);
}