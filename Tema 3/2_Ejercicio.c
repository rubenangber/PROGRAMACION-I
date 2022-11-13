#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, d;
	float modulo1, modulo2;
	
	printf("Introduce la parte entera del primer numero >> ");
	scanf("%d", &a);
	printf("Introduce la parte decimal del primer numero >> ");
	scanf("%d", &b);
	printf("Introduce la parte entera del segundo numero >> ");
	scanf("%d", &c);
	printf("Introduce la parte decimal del segundo numero >> ");
	scanf("%d", &d);
	
	modulo1 = sqrt(pow(a, 2) + pow(b, 2));
	modulo2 = sqrt(pow(c, 2) + pow(d, 2));
    
    printf("\nSuma >> %d,%di\n",a + c, b + d);
    printf("Producto >> %d,%di\n",a * c - b * d, a * d + b * c);
    printf("Modulo de %d,%di >> %f\n",a, b, modulo1);
    printf("Modulo de %d,%di >> %f\n",c, d, modulo2);
    
    return 0;
}