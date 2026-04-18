#include <stdio.h>
#include <stdlib.h>
#include "textfile-read.h"
void readfile(const char *arg) {
    FILE *file = fopen(arg, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }
    int value;
    while (fscanf(file, "%d", &value) == 1) {
        printf("%d ", value);
    }
    fclose(file);
}