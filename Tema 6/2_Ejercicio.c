#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define DIMMAX 11

int main() {
    char nombre[DIMMAX][50];
    int edad[DIMMAX];   
    float talla[DIMMAX];
    int edad_max, edad_min, edad_media = 0;
    float talla_max, talla_min, talla_media = 0;
    int i;

    for (i = 0; i < DIMMAX; i++) {
        printf("Nombre jugador %d >> ", i + 1);
        scanf(" %s", nombre[i]);
        printf("Edad jugador %d >> ", i + 1);
        scanf("%d", &edad[i]);
        printf("Talla jugador %d >> ", i + 1);
        scanf("%f", &talla[i]);
    }

    edad_max = edad[0];
    edad_min = edad[0];
    talla_max = talla[0];
    talla_min = talla[0];

    for (i = 0; i < DIMMAX; i++) {
        printf("%s\t%d\t%f\n", nombre[i], edad[i], talla[i]);
        
        edad_media = edad_media + edad[i];
        talla_media = talla_media + talla[i];
        
        if (edad[i] > edad_max) {
            edad_max = edad[i];
        }
        if (edad[i] < edad_min) {
            edad_min = edad[i];
        }

        if (talla[i] > talla_max) {
            talla_max = talla[i];
        }
        if (talla[i] < talla_min) {
            talla_min = talla[i];
        }
    }

    edad_media = edad_media / DIMMAX;
    talla_media = talla_media / DIMMAX;

    printf("Edad MAX >> %d\n", edad_max);
    printf("Edad MIN >> %d\n", edad_min);
    printf("Media edad >> %d\n", edad_media);

    printf("Talla MAX >> %f\n", talla_max);
    printf("Talla MIN >> %f\n", talla_min);
    printf("Media talla >> %f\n", talla_media);
    
    return 0;
}