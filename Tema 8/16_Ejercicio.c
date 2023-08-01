#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int);
int sumapar(int, int);
int sumaprod(int, int);
void inverso(int);

int main() {
    int num, fact, m, n, sumpar, x, y, sumpr;

    printf("Introduzca un numero >> ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("El factorial de ese numero es >> %d\n", fact);

    printf("Introduzca limite inferior >> ");
    scanf("%d", &m);
    do {
        printf("Introduzca limite superior >> ");
        scanf("%d", &n);
    } while (n <= m);

    sumpar = sumapar(m, n);

    printf("La suma de los elementos pares entre %d y %d es >> %d\n", m, n, sumpar);

    printf("Introduzca un numero >> ");
    scanf("%d", &x);
    printf("Introduzca y >> ");
    scanf("%d", &y);

    sumpr = sumaprod(x, y);

    printf("La suma es >> %d\n", sumpr);

    printf("El inverso de %d es >> ", num);
    inverso(num);

    return 0;
}

int factorial(int n) {
    int i, suma = 0;

    for (i = n; i > 0; i--) {
        suma = suma + i;
    }

    return suma;
}

int sumapar(int m, int n) {
    int i, suma = 0;

    for (i = m; i <= n; i++) {
        if (i % 2 == 0) {
            suma = suma + i;
        }
    }

    return suma;
}

int sumaprod(int x, int n) {
    int i, suma = 1;

    for (i = 2; i <= n; i++) {
        suma = suma + pow(x, i);
    }

    return suma;
}

void inverso(int num) {
    int unidades, decenas, centenas, millares;

    unidades = num % 10;
    num = num / 10;

    decenas = num % 10;
    num = num / 10;

    centenas = num % 10;
    num = num / 10;

    millares = num % 10;

    printf("%d%d%d%d\n", millares, centenas, decenas, unidades);
}