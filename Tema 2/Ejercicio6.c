#include <stdio.h>
#include <stdio.h>

#define MERCURIO 0.38
#define VENUS 0.78
#define TIERRA 1.00
#define MARTE 0.39
#define JUPITER 2.65
#define SATURNO 1.17
#define URANO 1.05
#define NEPTUNO 1.23
#define PLUTON 0.05

int main(){
    float peso;
    
    printf("Introduzca el peso >> ");
    scanf("%f", &peso);
    
    printf("\nPeso en Mercurio >> %f\n",peso*MERCURIO);
    printf("Peso en Venus >> %f\n",peso*VENUS);
    printf("Peso en la Tierra >> %f\n",peso*TIERRA);
    printf("Peso en Marte >> %f\n",peso*MARTE);
    printf("Peso en Jupiter >> %f\n",peso*JUPITER);
    printf("Peso en Saturno >> %f\n",peso*SATURNO);
    printf("Peso en Urano >> %f\n",peso*URANO);
    printf("Peso en Neptuno >> %f\n",peso*NEPTUNO);
    printf("Peso en Pluton >> %f\n",peso*PLUTON);
    
    return 0;
}