#include <stdio.h>
#include <stdio.h>
#define PI 3.14

int main() {
    float radio, altura, area_lat, volumen, perimetro, area_base;
    
    printf("Introduzca el radio >> ");
    scanf("%f", &radio);
    printf("Introduzca la altura >> ");
    scanf("%f", &altura);
    
    perimetro = 2 * PI * radio;
    area_lat = perimetro * altura;
    area_base = PI * radio * radio; //Con math.h --> PI * pow(radio,2);
	volumen = area_base * altura;
	
	printf("\nRADIO\tALTURA\tAREA LATERAL\tVOLUMEN\n");
	printf("%.2fcm\t%.2fcm\t%.2fcm2\t%.2fcm3\n", radio, altura, area_lat, volumen);
    
    return 0;
}