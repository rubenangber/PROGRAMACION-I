#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PI 3.141592

int main() {
    char opcion;
    float a, b, h, r, area;

    do {
        printf("A) Area de un rectangulo\n");
        printf("B) Area de un triangulo\n");
        printf("C) Area de un circulo\n");
        printf("D) Area de un trapecio\n");
        printf("S) Salir\n");
        printf("Introduzca la opcion >> ");
        fflush(stdin);
        scanf(" %c", &opcion);
        opcion = toupper(opcion);
    } while (opcion != 'A' && opcion != 'B' && opcion != 'C' && opcion != 'D' && opcion != 'S');

    switch (opcion) {
        case 'A':
            printf("Introduza la base >> ");
            scanf("%f", &b);
            printf("Introduza la altura >> ");
            scanf("%f", &h);

            area = b * h;
            printf("El area del rectagulo es >> %f\n", area);
        break;

        case 'B':
            printf("Introduza la base >> ");
            scanf("%f", &b);
            printf("Introduza la altura >> ");
            scanf("%f", &h);

            area = (b * h) / 2;
            printf("El area del triangulo es >> %f\n", area);
        break;

        case 'C':
            printf("Introduza el radio >> ");
            scanf("%f", &r);

            area = PI * r * r;
            printf("El area del circulo es >> %f\n", area);
        break;

        case 'D':
            printf("Introduza el lado a >> ");
            scanf("%f", &a);
            printf("Introduza el lado b >> ");
            scanf("%f", &b);
            printf("Introduza la altura >> ");
            scanf("%f", &h);

            area = ((a + b) * h) / 2;
            printf("El area del rectagulo es >> %f\n", area);
        break;

        case 'S':
            printf("Adios\n");
        break;
    
    }

    return 0;
}