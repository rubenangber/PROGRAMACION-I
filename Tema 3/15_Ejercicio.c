#include <stdlib.h>
#include <stdio.h>

int main() {
    int t, t_dias;
    float c, r, I;
    
    printf("Introduce el capital depositado >> ");
    scanf("%f", &c);
    printf("Tasa de interes (en %%) >> ");
    scanf("%f", &r);
    printf("Tiempo (en años) >> ");
    scanf("%d", &t);

    t_dias = t * 365;

    I = (c * r * t_dias) / (360 * 100);

    printf("\nEl interes recibido es >> %f\n", I);

    return 0;
}
