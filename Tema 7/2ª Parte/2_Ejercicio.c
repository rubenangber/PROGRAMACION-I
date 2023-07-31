#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define BLANCO ' '

int main() {
    char cadena[100], acro[100];
    int blancos, k, k2;

    printf("Introduzca cadena a convertir >> \n");
    gets(cadena);

    blancos = 0;
    k=0;

    while (cadena[k] != '\0') {
        if (cadena[k++] == BLANCO) {
            blancos++;
        }
    }

    blancos++;

    k=0;
    k2=0;

    acro[k2] = cadena[k];
    if (acro[k2] == ' ') {
        acro[k2] = ' ';
    } else {
        acro[k2] = toupper(acro[k2]);
    }

    while (cadena[k] != '\0') {
        if (cadena[k] == BLANCO) {
            k2++;
            k++;
            acro[k2] = cadena[k];
            if (acro[k2] == ' ') {
                 acro[k2] = ' ';
            } else {
              acro[k2] = toupper(acro[k2]);
            }
        } else {
              k++;
        }
    }

    k2++;
    acro[k2] = '\0';

    printf("Acronimo >> %s\n", acro);
    return 0;
}



