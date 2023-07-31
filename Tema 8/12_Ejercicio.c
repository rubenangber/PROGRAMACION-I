#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void abinario(char, char *);
void moduloPrincipal(void);

int main() {
    char respuesta; 
     
    do {
        moduloPrincipal();
        printf("\n"); 

        do { 
            printf("Quieres otra ejecucion >> ");
            scanf(" %c", &respuesta);
            respuesta = toupper(respuesta);
        } while (respuesta != 'S' && respuesta != 'N');  

    } while (respuesta != 'N');

    return 0;
}

void moduloPrincipal(void) {
    unsigned int numero;
    char cadenabin[9];

    do {
        printf("Introduzca numero >> ");
        scanf("%d", &numero);
    } while (numero < 0 && numero > 255);

    abinario(numero, cadenabin);

    printf("El numero >> %d en binario es >> %s", numero, cadenabin);
}

void abinario(char num, char *cad) {
    unsigned char mascara = 0x80;
    char temp;
    int k = 0;

    while (mascara != 0) {
        temp = num & mascara;
        (temp == 0) ? (cad[k] = '0') : (cad[k] = '1');
	    k++;
	    mascara = mascara >> 1;
    }

    cad[k] = '\0';
}