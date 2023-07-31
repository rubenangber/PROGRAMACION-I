#include <stdio.h>
#include <stdlib.h>
#define DIM 7
#define MAX 50
#define MIN 0

int main() {
    int matriz[DIM][DIM], *rotada[DIM * DIM], dim, cont;
    int i, j;

    do {
        printf("Introduzca la dimension de la matriz >> ");
        scanf("%d", &dim);
    } while (dim < 0 || dim > DIM);

    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            do {
                printf("Elemento (%d, %d): ", i + 1, j + 1);
                scanf("%d", &matriz[i][j]);
            } while (matriz[i][j] < MIN || matriz[i][j] > MAX);
        }
    }

    for (i = 0, cont = 0; i < dim; i++) {
        for (j = dim - 1; j >= 0; j--, cont++) {
            rotada[cont] = &matriz[j][i];
        }
    }

    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0, cont = 0; i < dim; i++) {
        for (j = 0; j < dim; j++, cont++) {
            printf("%d ", *rotada[cont]);
        }
        printf("\n");
    }

    return 0;
}