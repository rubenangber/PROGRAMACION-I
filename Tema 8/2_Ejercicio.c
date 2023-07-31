#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define CIERTO 1
#define FALSO 0

int esprimo(long);

int main() {
    long num;

    do {
       printf("Introduzca un numero >> ");
       scanf("%ld", &num);
    } while (num <= 0);

    if (esprimo(num)) {
        printf("%ld es primo\n", num);
    } else {
        printf("%ld NO es primo\n", num);
    }

    return 0;
}

int esprimo(long num) {
    int primo = CIERTO;
    long divisor = 2;
    float limite;

    limite = sqrt(num);

    while (primo && divisor <= limite) { 
        if (num % divisor == 0) {
            primo = FALSO;
        }
       divisor++;
    }
  
    return primo;
}
