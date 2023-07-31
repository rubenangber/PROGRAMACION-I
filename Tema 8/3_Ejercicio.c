#include <stdio.h>
#include <stdlib.h>
#define LIMITE 4UL

int perfecto(unsigned long);

int main() {
    unsigned long numero, cuantos;

    cuantos = 0;
    numero = 1;
    while (cuantos < LIMITE) {
	    if (perfecto(numero)) { 
	        printf("%8lu", numero);
	        cuantos++;
        }
        numero++;
    }

    return 0;
}

int perfecto(unsigned long n) {
    unsigned long acu = 0;
    unsigned long j;

    for (j = 1; j < n; j++) {
        if (n % j == 0) {
	        acu = acu + j;
        }
    }
    return (acu == n);
}