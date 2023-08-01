#include <stdio.h>
#include <stdlib.h>
#define DIM 100

void lee_vector(int *, int);
void escribe_vector(int *, int);
int comparar(int *, int *, int);

int main() {
    int v1[DIM], v2[DIM];
    int dim, comp;

    printf("Introduce la dimension de los vectores >> ");
    scanf("%d", &dim);

    lee_vector(v1, dim);
    lee_vector(v2, dim);
    escribe_vector(v1, dim);
    escribe_vector(v2, dim);

    if (comparar(v1, v2, dim)) {
        printf("Los vectores son iguales\n");
    } else {
        printf("Los vectores NO son iguales\n");
    }
    
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

int comparar(int *v1, int *v2, int dim) {
    int i;

    for (i = 0; i < dim; i++) {
        if (v1[i] != v2[i]) {
            return 0;
        }
    }

    return 1;
}