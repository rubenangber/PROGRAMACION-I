#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define DIAS 7
#define MUESTRAS 5

int main() {
    float temperatura [DIAS][MUESTRAS];
    float tmaxima [DIAS];
    float tminima [DIAS];
    float tmedia  [DIAS];
    float maxima_muestra, minima_muestra, media_muestra;
    int i, j;
    char  terminar;
    do {
        printf("Introduzca las muestras de temperaturas >>");
        for (i = 0; i < DIAS; i++) { 
            for (j = 0; j < MUESTRAS; j++) {
                printf("Dia %d Muestra %d >> ", i + 1, j + 1);
                scanf("%f", &temperatura[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < DIAS; i++) {
            tmaxima[i] = temperatura[i][0];
            tminima[i] = temperatura[i][0];
            for (j = 1; j < MUESTRAS; j++) {
                if (temperatura[i][j] > tmaxima[i]) {
                    tmaxima[i] = temperatura[i][j];
                } else if (temperatura[i][j] < tminima[i]) {
                        tminima[i] = temperatura[i][j];
                }
            }
        }

        for (i = 0; i < DIAS; i++) {
            tmedia[i] = 0;
            for (j = 1; j < MUESTRAS; j++) {
                tmedia[i] += temperatura[i][j];
            }
            tmedia[i] = tmedia[i] / MUESTRAS;
        }

        maxima_muestra = tmaxima[0];
        minima_muestra = tminima[0];
        for (i = 0; i < DIAS; i++) {
            if (tmaxima[i] > maxima_muestra) {
                maxima_muestra = tmaxima[i];
            }
            if (tminima[i] < minima_muestra) {
                minima_muestra = tminima[i];
            }
        }

        media_muestra = 0;
        for (i = 0; i < DIAS; i++) {
            media_muestra += tmedia[i];
        }
        media_muestra = media_muestra / DIAS;

        printf("DIA   MAXIMA  MINIMA  MEDIA\n");
        for (i = 0; i < DIAS; i++) {
            printf("%3d   %5.2f   %5.2f   %5.2f\n", i + 1, tmaxima[i], tminima[i], tmedia[i]);
        }

        printf("\nTemperatura maxima >> %5.2f\n", maxima_muestra);
        printf("Temperatura minima >> %5.2f\n", minima_muestra);
        printf("Temperatura media >> %5.2f\n", media_muestra);

        do { 
            printf("Quieres salir del programa (S/N) >> ");
            scanf(" %c", &terminar);
            terminar = toupper(terminar);
        } while (terminar != 'S' && terminar != 'N');

    } while (terminar != 'S');

    return 0;
}
