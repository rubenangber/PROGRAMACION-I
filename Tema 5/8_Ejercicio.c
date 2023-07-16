#include <stdio.h>
#include <stdlib.h>
#define LIMITE_SUP 30000

int main() {
    int n, cuantos = 1, numero;
    float suma = 0;

    do {   
        printf("Cuantos numeros (0 < n <= %d) >> ", LIMITE_SUP);
        scanf("%d", &n);
    } while (n <= 0 || n > LIMITE_SUP);

    for (;;)
        if (cuantos <= n) { 
            printf("Introduzca numero %d >> ", cuantos);
            scanf("%d", &numero);
            suma = suma + numero;
            cuantos++;
        }
        else {
            break;
        }
    
    printf("El valor de la suma es >> %.0f\n", suma);

    return 0;
}
