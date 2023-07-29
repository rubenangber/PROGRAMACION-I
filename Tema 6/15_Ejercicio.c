#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main() {
    int mat[MAX][MAX], sumfil[MAX], sumcol[MAX], sumdia[2];
    int n, x, y, vx, vy, i, j, lim, limx, limy, aux, flag;

    do {
        printf("Introduce N >> ");
        scanf("%d", &n);
    } while(n < 1 || n > MAX || n % 2 == 0);

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            mat[i][j] = -1;
        }
    }

    x = n / 2;
    y = 0;
    lim = n * n;
    limx = n - 1;
    limy = n - 1;

    for(i = 1; i <= lim; i++){
        mat[y][x] = i;
        vx = x;
        vy = y;
        x++;

        if (x > limx) {
            x = 0;
        }

        y--;

        if (y < 0) {
            y = limy;
        }

        if (mat[y][x] > -1) {
            x = vx;
            y = vy + 1;
        }
    }

    for (i = 0; i < n; i++) {
        aux = 0;
        for(j = 0; j < n; j++) {
            aux = aux + mat[i][j];
        }
        sumcol[i] = aux;
    }

    for (i = 1; i < n; i++) {
        if (sumcol[0] == sumcol[i]) {
            flag = 1;
        } else {
            flag = 0;
        }
    }

    for (j = 0; j < n; j++){
        aux = 0;
        for (i = 0; i < n; i++){
            aux = aux + mat[i][j];
        }
        sumfil[j] = aux;
    }

    for (j = 1; j < n; j++){
        if (sumfil[0] == sumfil[j]) {
            flag = 1;
        } else {
            flag = 0;
        }
    }

    for (i = 0; i < n; i++) {
        sumdia[0] = sumdia[0] + mat[i][i];
    }

    for (i = 0; i < n; i++) {
        sumdia[1] = sumdia[1] + mat[i][n - i - 1];
    }

    if (sumdia[0] == sumdia[1]) {
        flag = 1;
    } else {
        flag = 0;
    }

    for (i= 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (flag != 1)
        printf("El cuadrado es magico\n");
    else
        printf("El cuadrado NO es magico\n");

    return 0;
}