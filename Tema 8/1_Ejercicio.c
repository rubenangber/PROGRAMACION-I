#include <stdio.h>
#include <stdlib.h>

long sumar(long, long, long);
long multiplicar(long, long, long);
long calcular_mayor(long, long, long);

int main() {
    long num1, num2, num3;
    long suma, mult, mayor;

    printf("Introduzca primer numero >> ");
    scanf("%ld", &num1);
    printf("Introduzca segundo numero >> ");
    scanf("%ld", &num2);
    printf("Introduzca tercer numero >> ");
    scanf("%ld", &num3);

    suma = sumar(num1, num2, num3);
    mult = multiplicar(num1, num2, num3);
    mayor = calcular_mayor(num1, num2, num3);

    printf("La suma es >> %ld\n", suma);
    printf("La multiplicacion es >> %ld\n", mult);
    printf("El numero mayor es >> %ld\n", mayor);

    return 0;
}

long sumar(long num1, long num2, long num3) {
    return num1 + num2 + num3;
}

long multiplicar(long num1, long num2, long num3) {
    return num1 * num2 * num3;
}

long calcular_mayor(long num1, long num2, long num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3) {
        return num2;
    } else if (num3 > num1 && num3 > num2) {
        return num3;
    }
}
