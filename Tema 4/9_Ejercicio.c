#include <stdlib.h>
#include <stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Introduce el primer numero >> ");
	scanf("%d", &n1);
	printf("Introduce el segundo numero >> ");
	scanf("%d", &n2);
	printf("Introduce el tercer numero >> ");
	scanf("%d", &n3);
	
	if(n1 == n2 && n1 == n3 && n2 == n3) {
		printf("Los numeros son identicos\n");
	} else if (n1 < n2 && n1 < n3) {
		printf("El numero mas pequeno es el 1 >> %d\n", n1);
	} else if (n2 < n1 && n2 < n3) {
		printf("El numero mas pequeno es el 2 >> %d\n", n2);
	} else if (n3 < n1 && n3 < n2) {
		printf("El numero mas pequeno es el 3 >> %d\n", n3);
	}
	
	return 0;
}