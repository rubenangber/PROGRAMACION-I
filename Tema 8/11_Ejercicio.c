#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLANCO ' '

void eliminaEspaciosIzq(char *cad);
void eliminaEspaciosDer(char *cad);

int main() {
    char cadena[100];

    printf("Introduzca la cadena >> ");
    gets(cadena);

    printf("Cadena original\n>>>%s<<<\n", cadena);

    eliminaEspaciosIzq(cadena);

    printf("\nSin espacios por la izquierda\n>>>%s<<<\n", cadena);

    eliminaEspaciosDer(cadena);

    printf("\nSin espacios por la derecha\n>>>%s<<<\n", cadena);

    return 0;
}

void eliminaEspaciosIzq(char *cad) {
    int k, k2;

    k = 0;
    while (cad[k] == BLANCO) { 
        k++;
    }

    k2 = 0;
    while (cad[k] != '\0') {
        cad[k2++] = cad[k++];
    }

    cad[k2] = cad[k];
}

void eliminaEspaciosDer(char *cad) {
    int k;

    k = strlen(cad) - 1;
    while ((cad[k] == BLANCO) && (k >= 0)) {
        k--;
    }

    cad[++k] = '\0';
}