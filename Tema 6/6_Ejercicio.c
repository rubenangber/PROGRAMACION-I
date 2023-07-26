#include <stdio.h>
#include <stdlib.h>
#define DIM 100

int main() {
    long vector[DIM];
    int dim, i, diff, diffmax;

    do {
        printf("Introduzca dimension del vector >> ");
        scanf("%d", &dim);
    } while (dim < 2 || dim > DIM);

    printf("Vector[1] >> ");
    scanf("%ld", &vector[0]);

    for (i = 1; i < dim; i++) {
        do {
            printf("Vector[%d] >> ", i + 1);
            scanf("%ld", &vector[i]);
            if (vector[i] <= vector[i - 1]) {
                printf("El numero tiene que ser menor que el anterior\n");
            }
        } while (vector[i] <= vector[i - 1]);
    }

    diffmax = vector[0] - vector[1];

    for (i = 2; i < dim; i++) {
        diff = vector[i] - vector[i - 1];
        if (diff > diffmax) {
            diffmax = diff;
        }
    }

    for (i = 0; i < dim; i++) {
        printf("%ld ", vector[i]);
    }
    
    printf("\nLa diferencia maxima es de >> %d\n", diffmax);

    return 0;
}