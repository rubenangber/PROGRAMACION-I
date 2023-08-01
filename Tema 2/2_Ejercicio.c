#include <stdio.h>
#include <stdio.h>

int main() {
    int num, doble;
    
    printf("Introduzca un numero entero >> ");
    scanf("%d", &num);
    
    doble = num * 2;
    
    printf("El doble de %d es >> %d\n", num, doble);
    
    return 0;
}