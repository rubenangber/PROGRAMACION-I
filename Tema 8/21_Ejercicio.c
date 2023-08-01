#include <stdio.h>
#include <stdlib.h>
#define DIM 100

void lee_vector(long *, int);
void escribe_vector(long *, int);
void inicia_vector(long *, int, long);

int main() {
    long v1[DIM], v2[DIM], valor;
    int dim;

    printf("Introduce la dimension de los vectores >> ");
    scanf("%d", &dim);

    lee_vector(v1, dim);
    escribe_vector(v1, dim);

    printf("Introduce un valor >> ");
    scanf("%ld", &valor);

    inicia_vector(v2, dim, valor);
    escribe_vector(v2, dim);

    return 0;
}

void lee_vector(long *v, int dim) {
    int i;

    for (i = 0; i < dim; i++) {
        printf("Vector[%d] >> ", i + 1);
        scanf("%ld", &v[i]);
    }
}

void escribe_vector(long *v, int dim) {
    int i;

    for (i = 0; i < dim; i++) {
        printf("%ld ", v[i]);
    }
    printf("\n");
}

void inicia_vector(long *v, int dim, long valor) {
    int i;

    for (i = 0; i < dim; i++) {
        v[i] = valor;
    }
}