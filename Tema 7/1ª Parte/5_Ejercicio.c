#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main() {
    int i;
    float v[DIM];

    for (i = 0; i < DIM; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%f", v + i);
    }

    for (i = 0; i < DIM; i++) {
        printf("%.2f ", v[i]);
    }
    printf("\n");

    return 0;
}