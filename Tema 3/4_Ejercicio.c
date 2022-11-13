#include <stdio.h>
#include <stdio.h>

int main(){
	double a, b, c;
	int esTriangulo, esEscaleno, esEquilatero, esIsosceles;
	
	printf("Introduce el primer lado del triangulo >> ");
	scanf("%d", &a);
	printf("Introduce el segundo lado del triangulo >> ");
	scanf("%f", &b);
	printf("Introduce el tercer lado del triangulo >> ");
	scanf("%f", &c);
	 
	esTriangulo = (a + b > c) && (a + c > b) && (b + c > a);
    esEscaleno = esTriangulo && (a != b) && (a != c) && (b != c);
	esEquilatero = esTriangulo && (a == b) && (b == c);
	esIsosceles = esTriangulo && (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a)));
	
	if (esTriangulo){
		printf("\nEs un triangulo\n");
		if(esEscaleno){
			printf("Es un triangulo escaleno\n");
		} else if (esEquilatero) {
			printf("Es un triangulo equilatero\n");
		} else if (esIsosceles) {
			printf("Es un triangulo isosceles\n");
		}
	} else {
		printf("\nNo es un triangulo\n");
	}
    
    return 0;
}