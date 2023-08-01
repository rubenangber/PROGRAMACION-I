#include <stdio.h>
#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    printf("Introduce el primer numero >> ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero >> ");
    scanf("%d", &num2);
    
    printf("\nVariables antes del intercambio\n");
    printf("Numero 1 >> %d\nNumero 2 >> %d\n",num1, num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("\nVariables despues del intercambio\n");
    printf("Numero 1 >> %d\nNumero 2 >> %d\n",num1, num2);
    
    return 0;
}