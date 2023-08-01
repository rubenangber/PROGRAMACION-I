#include <stdio.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    float radio, volumen;
    
    printf("Introduce el radio >> ");
    scanf("%f", &radio);
    
    volumen = (4 * PI / 3) * pow(radio, 3);
    
    printf("\nVolumen de la espera >> %f\n",volumen);
    
    return 0;
}