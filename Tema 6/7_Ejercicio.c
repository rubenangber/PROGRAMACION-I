#include <stdio.h>
#include <stdlib.h>
#define DIM 100

int main() {
    int vector[DIM], invertido[DIM], dim, i;

    do {
        printf("Introduzca dimension del vector >> ");
        scanf("%d", &dim);
    } while (dim < 2 || dim > DIM);

    for (i = 0; i < dim; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < dim; i++) {
        invertido[i] = vector[dim - 1 - i];
    }

    printf("Vector original\n");
    for (i = 0; i < dim; i++) {
        printf("%d ", vector[i]);
    }

    printf("\nVector invertido\n");
    for (i = 0; i < dim; i++) {
        printf("%d ", invertido[i]);
    }

    return 0;
}