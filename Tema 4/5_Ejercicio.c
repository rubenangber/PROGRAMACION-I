#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float x, funcion;

    printf("Introduce el valor de x >> ");
    scanf("%f", &x);

    if (x < -1) {
        funcion = pow(x, 2) - pow(x, 3);
    } else if (x >= -1 && x < 2) {
        funcion = exp(x +1);
    } else if (x >= 2 && x <= 5) {
        funcion = log(x);
    } else if (x > 5) {
        funcion = pow(x, 2) - x;
    }

    printf("Valor de x >> %.2f\n", x);
    printf("Valor de f(x) >> %f\n", funcion);

    return 0;
}
