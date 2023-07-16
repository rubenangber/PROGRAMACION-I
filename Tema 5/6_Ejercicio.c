#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PESETA 166.386

int main() {
    float pesetas, euros;
    char opcion;

    do {
        printf("A) De pesetas a euros\n");
        printf("B) De euros a pesetas\n");
        printf("S) Salir\n");

        printf("Introduzca la opcion >> ");
        fflush(stdin);
        scanf(" %c", &opcion);
        opcion = toupper(opcion);
    } while (opcion != 'A' && opcion != 'B' && opcion != 'S' && opcion != 'S');

    switch (opcion) {
        case 'A':
            printf("Introduzca el importe >> ");
            scanf("%f", &pesetas);
            euros = pesetas / PESETA;
            printf("%f pesetas son >> %f euros\n", pesetas, euros);
        break;

        case 'B':
            printf("Introduzca el importe >> ");
            scanf("%f", &euros);
            pesetas = euros * PESETA;
            printf("%f euros son >> %f pesetas\n", euros, pesetas);
        break;

        case 'S':
            printf("Adios\n");
        break;
    }

    return 0;
}