#include <stdio.h>
#include <stdlib.h>
#define DIM 100

void lee_vector(long *, int);
void escribe_vector(long *, int);
float media_vector(long *, int);

int main() {
    long v[DIM], valor;
    int dim;
    float media;

    printf("Introduce la dimension de los vectores >> ");
    scanf("%d", &dim);

    lee_vector(v, dim);
    escribe_vector(v, dim);

    media = media_vector(v, dim);

    printf("La media del vector es >> %f\n", media);

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

float media_vector(long *v, int dim) {
    float media = 0;
    int i;

    for (i = 0; i < dim; i++) {
        media = media + v[i];
    }

    media = media / dim;

    return media;
}