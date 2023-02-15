#include <stdio.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
    float base, altura, ladoa, ladob, radio, area;
    char opcion;

    printf("CALCULO DE AREAS\n");
    printf("a) Rectangulo\n");
    printf("b) Triangulo\n");
    printf("c) Circulo\n");
    printf("d) Trapecio\n");
    printf("s) Salir\n");

    
    printf("Introduzca una opcion >> ");
    opcion = getchar();
    
    switch (opcion){
        case 'a':
        case 'A':
            printf("Introduzca la base >> ");
            scanf("%f", &base);
            printf("Introduzca la altura >> ");
            scanf("%f", &altura);

            area = base * altura;
            
            printf("Area del rectangulo >> %f", area);
        break;

        case 'b':
        case 'B':
            printf("Introduzca la base >> ");
            scanf("%f", &base);
            printf("Introduzca la altura >> ");
            scanf("%f", &altura);

            area = (base * altura) / 2.0;
            
            printf("Area del rectangulo >> %f", area);
        break;

        case 'c':
        case 'C':
            printf("Introduzca el radio >> ");
            scanf("%f", &radio);

            area = PI * pow(radio, 2);
            
            printf("Area del rectangulo >> %f", area);
        break;

        case 'd':
        case 'D':
            printf("Introduzca el primer lado >> ");
            scanf("%f", &ladoa);
            printf("Introduzca el segundo lado >> ");
            scanf("%f", &ladob);
            printf("Introduzca la altura >> ");
            scanf("%f", &altura);

            area = ((ladoa + ladob) * altura) / 2.0;
            
            printf("Area del rectangulo >> %f", area);
        break;

        case 's':
        case 'S':
            printf("Adios\n");
        break;
        
        default:
            printf("Opcion %c incorrecta\n", opcion);
        break;
    }

    return 0;
}
