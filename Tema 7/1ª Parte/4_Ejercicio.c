#include <stdio.h>
#include <stdlib.h>
#define FIL 10
#define COL 7

int main() {
    int i, j;
    float m[FIL][COL];

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            *(*(m + i) + j) = j;
        }
    }

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            printf("%.2f ", *(*(m + i) + j));
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}