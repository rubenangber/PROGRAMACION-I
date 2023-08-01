#include <stdio.h>
#include <stdlib.h>
#define DIM 100

void lee_vector(int *, int);
void escribe_vector(int *, int);
void maxMinVector(int *, int , int *, int *);

int main() {
    int v[DIM];
    int dim, max, min;

    printf("Introduce la dimension de los vectores >> ");
    scanf("%d", &dim);

    lee_vector(v, dim);
    escribe_vector(v, dim);

    maxMinVector(v, dim, &max, &min);

    printf("El maximo del vector es >> %d\n", max);
    printf("El minimo del vector es >> %d\n", min);

    return 0;
}

void lee_vector(int *v, int dim) {
    int i;

    for (i = 0; i < dim; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%d", &v[i]);
    }
}

void escribe_vector(int *v, int dim) {
    int i;

    for (i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void maxMinVector(int *v, int dim, int *max, int *min) {
    int i;

    *max = v[0];
    *min = v[0];

    for (i = 0; i < dim; i++) {
        if (v[i] > *max) {
            *max = v[i];
        }
        if (v[i] < *min) {
            *min = v[i];
        }
    }
}