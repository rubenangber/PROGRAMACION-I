#include <stdio.h>
#include <string.h>
#define DIM 100

int main() {
    char cadena[DIM];
    int i;

    printf("Ingrese una cadena >> ");
    scanf("%99[^\n]", cadena);

    int longitud = strlen(cadena);
    char cadenaInvertida[longitud + 1];

    for (i = 0; i < longitud; i++) {
        cadenaInvertida[i] = cadena[longitud - i - 1];
    }

    cadenaInvertida[longitud] = '\0';

    printf("Cadena original >> %s\n", cadena);
    printf("Cadena invertida >> %s\n", cadenaInvertida);

    return 0;
}
