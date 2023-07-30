#include <stdio.h>
#include <stdlib.h>
#define MAX 7000
#define MIN 1000
#define DIM 15

int main() {
    int v[DIM], *v_ordenado[DIM], rep, menor, encon;
    int i, j, k;

    for (i = 0; i < DIM; i++) {
        do {
            rep = 0;
            printf("Vector[%d] >> ", i + 1);
            scanf("%d", &v[i]);
            if (i != 0) {
                for (j = i; j > 0; j--)  {
                    if (v[i] == v[j - 1]) {
                        rep = 1;
                    }
                }
            }
        } while (v[i] < MIN || v[i] > MAX || rep == 1);
    }

    i = 0;
    for (k = MIN; k < MAX; k++) {
        j = -1;
        encon = 0;
        while (encon == 0 && j < DIM - 1) {
            j++;
            if (v[j] == k) {
                encon = 1;
            }
        }
        if (encon == 1) {
            v_ordenado[i] = &v[j];
            i++;
        }
    }

    printf("Vector desordenado\n");
    for (i = 0; i < DIM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Vector ordenado\n");
    for (i = 0; i < DIM; i++) {
        printf("%d ", *v_ordenado[i]);
    }
    printf("\n");

    return 0;
}