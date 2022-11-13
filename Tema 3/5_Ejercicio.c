#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
	float num;
	
	printf("Introduce el numero >> ");
	scanf("%f", &num);
	
	printf("\nNumero introducido >> %f\n",num);
	printf("Cuadrado >> %f\n",pow(num, 2));
	printf("Cubo >> %f\n",pow(num, 3));
	printf("Logaritmo neperiano >> %f\n",log(num));
	printf("Logaritmo decimal >> %f\n",log10(num));
	printf("Raiz cuadrada >> %f\n",sqrt(num));
    
    return 0;
}