#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char nombre[100], ape1[100], ape2[100];
	char n1, n2, n3;
	
	printf("Introduce nombre >> ");
	scanf("%s", nombre);
	printf("Introduce el primer apellido >> ");
	scanf("%s", ape1);
	printf("Introduce el segundo apellido >> ");
	scanf("%s", ape2);
	
	n1 = toupper(nombre[0]);
	n2 = toupper(ape1[0]);
	n3 = toupper(ape2[0]);
	
	printf("\nEl nombre introducido es >> %s %s %s\n",nombre, ape1, ape2);
	printf("%c %c %c",n1, n2, n3);
    
    return 0;
}