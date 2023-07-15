#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIMSUM_INF 0.0
#define LIMSUM_SUP 10000.8

int main() {
    float limite_suma;
    char terminar;
    float suma;
    int nterm;

    do {
        do {   
            printf("Introduzca un numero >> ");
            scanf("%f", &limite_suma);
        } while (limite_suma <= LIMSUM_INF || limite_suma > LIMSUM_SUP);

        suma = 0;
        nterm = 0;
        while (suma <= limite_suma) {  
            nterm++;
            suma = suma + ((float) nterm / (nterm + 1));
        }

        printf("Sumando %d terminos, la suma de la serie vale %f\n", nterm, suma);
        
        do {   
            printf("Salir del programa (S/N)? >> "); 
            fflush(stdin);
            scanf(" %c", &terminar);
            terminar = toupper(terminar);
        } while (terminar != 'S' && terminar != 'N');

    } while (terminar != 'S');

    return 0;
}