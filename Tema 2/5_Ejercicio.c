#include <stdio.h>
#include <stdio.h>

int main() {
    float num1, num2, suma, resta, mult, div;
    
    printf("Introduzca el primer numero >> ");
    scanf("%f", &num1);
    printf("Introduzca el segundo numero >> ");
    scanf("%f", &num2);
    
    suma = num1 + num2;
    resta = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("\nSuma >> %f\n", suma);
	printf("Resta >> %f\n", resta);
	printf("Multiplicacion >> %f\n", mult);
	printf("Division >> %f\n", div);
    
    return 0;
}