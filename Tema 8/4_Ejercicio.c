#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void moduloPrincipal(void);
unsigned long divisores(unsigned long);
int amigos(unsigned long, unsigned long);

int main() {
    char respuesta;

    do { 
        moduloPrincipal();
        printf("\n");

	    do { 
            printf("Otra ejecucion >> ");
            printf(" %c", respuesta);
            respuesta = toupper(getchar());
	    } while (respuesta != 'S' && respuesta != 'N');
    } while (respuesta != 'N');
    
    return 0;
}

void moduloPrincipal (void) {
    long numero1, numero2;

    do { 
        printf("Introduzca primer numero >> ");
        scanf("%ld", &numero1);
    } while (numero1 <= 0);

    do { 
        printf("Introduzca segundo numero >> ");
        scanf("%ld", &numero2);
    } while (numero2 <= 0);

    if (amigos(numero1, numero2)) {
	    printf("Los numeros >> %ld y %ld son amigos\n", numero1, numero2);
    } else {
	    printf("Los numeros >> %ld y %ld NO son amigos\n", numero1, numero2);
    }
}



unsigned long divisores(unsigned long n) {
    unsigned long acu = 0;
    unsigned long j;

    for (j = 1; j < n; j++) {
	    if (n % j == 0) {
	        acu += j;
        }
    }

    return (acu);
}

int amigos(unsigned long n1, unsigned long n2) {
    return ((n1==divisores(n2)) && (n2==divisores(n1)));
}