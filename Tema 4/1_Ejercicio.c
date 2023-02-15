#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c;
    float x1, x2, x1real, x2real, x1imag, x2imag, discriminante;

    printf("         _________\n");
    printf(" -b +- \\/b2 - 4ac\n");
    printf("-------------------\n");
    printf("       2a\n\n\n");

    printf("Introduzca a >> ");
    scanf("%d", &a);
    printf("Introduzca b >> ");
    scanf("%d", &b);
    printf("Introduzca c >> ");
    scanf("%d", &c);

    discriminante = (pow(b, 2)) - (4 * a * c);

    if (discriminante == 0){
        x1 = -b / (2.0 * a);
        x2 = -b / (2.0 * a);

        printf("SOLUCION\nx1 >> %f\nx2 >> %f\n", x1, x2);
    } else if (discriminante > 0){
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        printf("SOLUCION\nx1 >> %f\nx2 >> %f\n", x1, x2);
    } else if (discriminante < 0) {
        x1real = -b / (2.0 * a);
        x2real = -b / (2.0 * a);
        x1imag = sqrt(-discriminante) / (2 * a);
        x2imag = -sqrt(-discriminante) / (2 * a);

        printf("SOLUCION\nx1 >> %f %f i\nx2 >> %f %f i\n", x1real, x1imag, x2real, x2imag);
    }

    return 0;
}