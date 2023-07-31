#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[80];
    char *separador = " ";
    char *ptr;
    
    printf("Introduzca una frase >> ");
    gets(cadena);
    printf("Se descompone en palabras >> ");
    ptr = strtok(cadena, separador);

    while (ptr) {  
        printf("%s\t", ptr);
        ptr = strtok(NULL, separador);
    }
    printf("\n");

    return 0;
}