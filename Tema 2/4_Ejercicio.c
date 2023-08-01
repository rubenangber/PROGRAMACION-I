#include <stdio.h>
#include <stdio.h>
#include <math.h> //Permite usar pow

int main() {
    int num, cuadrado, cuadrado_math;
    
    printf("Introduzca un numero >> ");
    scanf("%d", &num);
    
    cuadrado = num * num;
    cuadrado_math = pow(num, 2); //num^2
    
    printf("El cuadrado de %d es >> %d\n", num, cuadrado);
    printf("El cuadrado de %d es >> %d (math)\n", num, cuadrado_math);
    
    return 0;
}