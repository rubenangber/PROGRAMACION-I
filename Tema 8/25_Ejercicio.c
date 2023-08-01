#include <stdio.h>
#include <stdlib.h>
#define FIL 4
#define COL 4

float traza(float (*)[]);
int simetrica(float (*)[]);
void presentaMatriz(float (*)[]);

int main() {
    float m[FIL][COL], tr;
    int sim, i, j;

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            printf("Matriz[%d][%d] >> ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
    }

    tr = traza(m);
    sim = simetrica(m);

    presentaMatriz(m);
    if(sim == 1) {
        printf("La matriz es simetrica\n");
    } else {
        printf("La matriz NO es simetrica\n");
    }

    printf("La traza de la matriz es >> %.2f\n", tr);

    return 0;
}

float traza(float (*mat)[COL]) {
    float res;
    int i, j;

    for(i = 0; i < FIL; i++) {
        for(j = 0; j < COL; j++) {
            if(i == j) {
                res = res + mat[i][j];
            }
        }
    }

    return res;
}

int simetrica(float (*mat)[COL]) {
    int flag = 1, i, j;

    for(i = 0; i < FIL && flag == 1; i++) {
        for(j = 0; j < COL && flag == 1; j++) {
            if(i != j) {
                if(mat[i][j] == mat[j][i]) {
                    flag = 1;
                } else {
                    flag = 0;
                }
            }
        }
    }
    
    if(flag == 1) {
        return 1;
    } else {
        return 0;
    }
}

void presentaMatriz(float (*mat)[COL]) {
    int i, j;

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
}