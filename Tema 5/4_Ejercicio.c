#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIMTERM_INF 0 
#define LIMTERM_SUP 60000

int main() {
    int num, i;
    char terminar;
    float suma;

    do {
        do {   
            printf("Introduzca un numero >> ");
            scanf("%d", &num);
        } while (num <= LIMTERM_INF || num > LIMTERM_SUP);

        suma = 0;
        for (i = 1; i <= num; i++) {
            suma = suma + ((float) i / (i + 1));
        }
    
        printf("Sumando %d terminos, la suma de la serie vale >> %f\n", num, suma);

        do {
            printf("Desea salir del programa (S/N)? >> "); 
            fflush(stdin);
            scanf(" %c", &terminar);
            terminar = toupper(terminar);
        } while (terminar != 'S' && terminar != 'N');

    } while (terminar != 'S');

    return 0;
}
