#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 0; i < 256; i++) {
        printf("%c - %d\n", i, i);
    }

    return 0;
}