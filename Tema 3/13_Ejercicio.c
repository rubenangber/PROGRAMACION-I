#include <stdlib.h>
#include <stdio.h>

int main(){
    int b500, b200, b100, b50, b20, b10, b5, total, temp;

    printf("Introduce el numero de billetes de 500 >> ");
    scanf("%d", &b500);
    printf("Introduce el numero de billetes de 200 >> ");
    scanf("%d", &b200);
    printf("Introduce el numero de billetes de 100 >> ");
    scanf("%d", &b100);
    printf("Introduce el numero de billetes de 50 >> ");
    scanf("%d", &b50);
    printf("Introduce el numero de billetes de 20 >> ");
    scanf("%d", &b20);
    printf("Introduce el numero de billetes de 10 >> ");
    scanf("%d", &b10);
    printf("Introduce el numero de billetes de 5 >> ");
    scanf("%d", &b5);

    total = b500 * 500 + b200 * 200 + b100 * 100 + b50 * 50 + b20 * 20 + b10 * 10 + b5 * 5;

    printf("\nImporte a cambiar >> %d\n", total);

    b500 = total / 500;
    b200 = (total - b500 * 500) / 200;
    b100 = (total - b500 * 500 - b200 * 200) / 100;
    b50 = (total - b500 * 500 - b200 * 200 - b100 * 100) / 50;
    b20 = (total - b500 * 500 - b200 * 200 - b100 * 100 - b50 * 50) / 20;
    b10 = (total - b500 * 500 - b200 * 200 - b100 * 100 - b50 * 50 - b20 * 20) / 10;
    b5 = (total - b500 * 500 - b200 * 200 - b100 * 100 - b50 * 50 - b20 * 20 - b10 * 10) / 5;

    printf("\nBilletes de 500 >> %d\n",b500);
    printf("Billetes de 200 >> %d\n",b200);
    printf("Billetes de 100 >> %d\n",b100);
    printf("Billetes de 50 >> %d\n",b50);
    printf("Billetes de 20 >> %d\n",b20);
    printf("Billetes de 10 >> %d\n",b10);
    printf("Billetes de 5 >> %d\n",b5);
    
    return 0;
}
