#include <stdio.h>
#include <stdlib.h>
#include "textfile-read.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }
    readfile(argv[1]);
    
    return EXIT_SUCCESS;
}