#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
	int plazo;
	float cuota, capital, interes, interesMensual;
   
    printf("Introduce el capital >> ");
    scanf("%f", &capital);
    
    printf("Introduce el plazo >> ");
    scanf("%d", &plazo);
    
    printf("Introduce el interes >> ");
    scanf("%f", &interes);
	
	interesMensual = interes / 12;
    plazo = plazo * 12;

    cuota = (capital * interesMensual) / (100 * (1 - pow(1 + (interesMensual / 100), -plazo)));
	
	printf("\nCuota >> %f\n",cuota);
	
    return 0;
}