#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NUMMIN 1
#define NUMMAX 9999

int main() {
	int num, unidad, decena, centena, millar, temp;
	char codigo[5] = "";
	
	printf("Introduce el numero (hasta 4 cifras) >> ");
	scanf("%d", &num);
	
	if (num < NUMMIN || num > NUMMAX) {
		printf("El numero (%d) no es valido", num);
	} else {
		millar = num / 1000;
		temp = num % 1000;
		centena = temp / 100;
		temp = temp % 100;
		decena = temp / 10;
		unidad = temp % 10;
		
		switch(millar){
			case 0:
				strcat(codigo, "O");
			break;
			case 1:
				strcat(codigo, "G");
			break;
			case 2:
				strcat(codigo, "A");
			break;	
			case 3:
				strcat(codigo, "L");
			break;
			case 4:
				strcat(codigo, "E");
			break;
			case 5:
				strcat(codigo, "I");
			break;
			case 6:
				strcat(codigo, "C");
			break;
			case 7:
				strcat(codigo, "R");
			break;
			case 8:
				strcat(codigo, "U");
			break;	
			case 9:
				strcat(codigo, "M");
			break;				
		}
		
		switch(centena){
			case 0:
				strcat(codigo, "O");
			break;
			case 1:
				strcat(codigo, "G");
			break;
			case 2:
				strcat(codigo, "A");
			break;	
			case 3:
				strcat(codigo, "L");
			break;
			case 4:
				strcat(codigo, "E");
			break;
			case 5:
				strcat(codigo, "I");
			break;
			case 6:
				strcat(codigo, "C");
			break;
			case 7:
				strcat(codigo, "R");
			break;
			case 8:
				strcat(codigo, "U");
			break;	
			case 9:
				strcat(codigo, "M");
			break;				
		}
		
		switch(decena){
			case 0:
				strcat(codigo, "O");
			break;
			case 1:
				strcat(codigo, "G");
			break;
			case 2:
				strcat(codigo, "A");
			break;	
			case 3:
				strcat(codigo, "L");
			break;
			case 4:
				strcat(codigo, "E");
			break;
			case 5:
				strcat(codigo, "I");
			break;
			case 6:
				strcat(codigo, "C");
			break;
			case 7:
				strcat(codigo, "R");
			break;
			case 8:
				strcat(codigo, "U");
			break;	
			case 9:
				strcat(codigo, "M");
			break;				
		}
		
		switch(unidad){
			case 0:
				strcat(codigo, "O");
			break;
			case 1:
				strcat(codigo, "G");
			break;
			case 2:
				strcat(codigo, "A");
			break;	
			case 3:
				strcat(codigo, "L");
			break;
			case 4:
				strcat(codigo, "E");
			break;
			case 5:
				strcat(codigo, "I");
			break;
			case 6:
				strcat(codigo, "C");
			break;
			case 7:
				strcat(codigo, "R");
			break;
			case 8:
				strcat(codigo, "U");
			break;	
			case 9:
				strcat(codigo, "M");
			break;				
		}
		
		printf("El precio %d en codigo murcielago es >> %s\n", num, codigo);
	}
	
	return 0;
}