#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    long int DNI;
    const char tablaNIF[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P','D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
    int i, opc;
    char letra;

    do {
        do {
            printf("1) Sacar letra del DNI\n");
            printf("2) Comprobar letra del DNI\n");
            printf("0) Salir\n");
            printf("Introduzca opcion >> ");
            scanf("%d", &opc);
        } while (opc != 1 && opc != 2 && opc != 0);

        switch (opc) {
            case 1:
                printf("Introduzca DNI >> ");
                scanf("%ld", &DNI);

                i = DNI % 23;

                printf("La letra de tu DNI es >> %c\n", tablaNIF[i]);
            break;

            case 2:
                printf("Introduzca DNI >> ");
                scanf("%ld", &DNI);
                printf("Introduzca letra del DNI >> ");
                scanf(" %c", &letra);

                letra = toupper(letra);
                i = DNI % 23;

                if (letra == tablaNIF[i]) {
                    printf("La letra del DNI es correcta\n");
                } else {
                    printf("La letra del DNI no es correcta, deberia ser >> %c\n", tablaNIF[i]);
                }
            break;
        }
    } while (opc != 0);
}