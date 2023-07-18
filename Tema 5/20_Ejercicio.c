#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char opcion;
    float euros, dolares, libras, v_dolares = 1.2416, v_libras = 0.7769;
    int i = 1;

    do {
        do {
            printf("0) Introducir valores cotización divisas\n");
            printf("A) Convertir euros a dolares y libras\n");
            printf("B) Convertir dolares a euros y libras\n");
            printf("C) Convertir libras a euros y dolares\n");
            printf("S) Salir\n");
            printf("Introduzca opcion >> ");
            scanf(" %c", &opcion);
            opcion = toupper(opcion);
        } while (opcion != '0' && opcion != 'A' && opcion != 'B' && opcion != 'C' && opcion != 'D' && opcion != 'S');

        switch (opcion) {
            case '0':
                printf("Introduzca cuantas libras son 1 euro >> ");
                scanf("%f", &v_libras);
                printf("Introduzca cuantos dolares son 1 euro >> ");
                scanf("%f", &v_dolares);
            break;

            case 'A':
                printf("Introduzca el importe en euros >> ");
                scanf("%f", &euros);
                dolares = euros * v_dolares;
                libras = euros * v_libras;

                printf("Euros >> %.4f\n", euros);
                printf("Dolares >> %.4f\n", dolares);
                printf("Libras >> %.4f\n", libras);
            break;

            case 'B':
                printf("Introduzca el importe en dolares >> ");
                scanf("%f", &dolares);

                euros = dolares * 0.8054;
                libras = dolares * 0.6257;

                printf("Dolares >> %.4f\n", dolares);
                printf("Euros >> %.4f\n", euros);
                printf("Libras >> %.4f\n", libras);
            break;

            case 'C':
                printf("Introduzca el importe en libras >> ");
                scanf("%f", &libras);

                euros = libras * 1.2872;
                dolares = libras * 1.5981;

                printf("Libras >> %.4f\n", libras);
                printf("Euros >> %.4f\n", euros);
                printf("Dolares >> %.4f\n", dolares);
            break;

            case 'S':
                printf("Adios\n");
                return 0;
            break;
        }
    } while (i = 1);

    return 0;
}