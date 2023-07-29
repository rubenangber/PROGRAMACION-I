#include <stdio.h>
#include <stdlib.h>
#define DIAS 7
#define MUESTRAS 6

int main() {
    float temp[DIAS][MUESTRAS];
    int horas[MUESTRAS] = {30, 510, 945, 1230, 1855, 2220};
    float tmax_dia[DIAS], tmin_dia[DIAS], tmedia_dia[DIAS], tmax_muestra[MUESTRAS], tmin_muestra[MUESTRAS], tmedia_muestra[MUESTRAS];
    float tmax_total, tmin_total, tmedia_total, aux;

    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < MUESTRAS; j++) {
            printf("Matriz[%d][%d] >> ", i + 1, j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    for (int d = 0; d < DIAS; d++) {
        tmax_dia[d] = temp[d][0];
        tmin_dia[d] = temp[d][0];
        for (int m = 1; m < MUESTRAS; m++) {
            if (temp[d][m] > tmax_dia[d]) {
                tmax_dia[d] = temp[d][m];
            }
            if (temp[d][m] < tmin_dia[d]) {
                tmin_dia[d] = temp[d][m];
            }
        }
    }

    for (int d = 0; d < DIAS; d++) {
        aux = 0;
        for (int m = 0; m < MUESTRAS; m++) {
            aux += temp[d][m];
        }
        tmedia_dia[d] = aux / MUESTRAS;
    }

    for (int m = 0; m < MUESTRAS; m++) {
        tmax_muestra[m] = temp[0][m];
        tmin_muestra[m] = temp[0][m];
        for (int d = 1; d < DIAS; d++) {
            if (temp[d][m] > tmax_muestra[m]) {
                tmax_muestra[m] = temp[d][m];
            }
            if (temp[d][m] < tmin_muestra[m]) {
                tmin_muestra[m] = temp[d][m];
            }
        }
    }

    for (int m = 0; m < MUESTRAS; m++) {
        aux = 0;
        for (int d = 0; d < DIAS; d++) {
            aux += temp[d][m];
        }
        tmedia_muestra[m] = aux / DIAS;
    }

    aux = 0;
    tmax_total = temp[0][0];
    tmin_total = temp[0][0];
    for (int d = 0; d < DIAS; d++) {
        for (int m = 0; m < MUESTRAS; m++) {
            aux += temp[d][m];
            if (temp[d][m] > tmax_total) {
                tmax_total = temp[d][m];
            }
            if (temp[d][m] < tmin_total) {
                tmin_total = temp[d][m];
            }
        }
    }
    tmedia_total = aux / (DIAS * MUESTRAS);
    
    printf("DIA   MAXIMA  MINIMA   MEDIA\n");
    for (int d = 0; d < DIAS; d++) {
        printf("%2d%10.2f%8.2f%8.2f\n", d+1, tmax_dia[d], tmin_dia[d], tmedia_dia[d]);
    }

    printf("HORA    MAXIMA  MINIMA  MEDIA\n");
    for (int m = 0; m < MUESTRAS; m++) {
        printf("%02d:%02d%9.2f%8.2f%7.2f\n", horas[m]/100, horas[m]%100, tmax_muestra[m], tmin_muestra[m], tmedia_muestra[m]);
    }

    printf("\nTemperatura máxima muestras >> %6.2f", tmax_total);
    printf("\nTemperatura minima muestras >> %6.2f", tmin_total);
    printf("\nTemperatura media  muestras >> %6.2f", tmedia_total);

    return 0;
}