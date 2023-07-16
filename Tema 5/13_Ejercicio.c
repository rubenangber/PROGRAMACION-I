#include <stdio.h>
#include <stdlib.h>
#define LIMITEINF -99
#define LIMITESUP 99

int main() {
    float temp, cuantos = 0, media = 0, tot_pos = 0, tot_neg = 0, tot_cero = 0;

    printf("Introduce la temperatura >> ");
    scanf("%f", &temp);

    while (temp > LIMITEINF && temp < LIMITESUP) {
        cuantos++;
        media = media + temp;
        if (temp > 0) {
            tot_pos++;
        } else if (temp < 0) {
            tot_neg++;
        } else {
            tot_cero++;
        }
        printf("Introduce la temperatura >> ");
        scanf("%f", &temp);
    }
    media = media / cuantos;

    printf("Temperaturas introducidas >> %.0f\n", cuantos);
    printf("Media >> %f\n", media);
    printf("Positivas >> %.0f\n", tot_pos);
    printf("Negativas >> %.0f\n", tot_neg);
    printf("Cero >> %.0f\n", tot_cero);

    return 0;
}