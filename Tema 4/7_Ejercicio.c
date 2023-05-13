#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, opcion;

    printf("   1) De decimal a octal y hexadecimal\n");
    printf("   2) De octal a decimal y hexadecimal\n");
    printf("   3) De hexadecimal a decimal y octal\n");
    printf("Otro) Salir\n");
    printf("Introduce una opcion >> ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Introduce un numero >> ");
            scanf("%d", &num);
            printf("%d\t%X\t%o\n", num, num, num);
        break;
        case 2:
            printf("Introduce un numero >> ");
            scanf("%o", &num);
            printf("%d\t%X\t%o\n", num, num, num);
        break;
        case 3:
            printf("Introduce un numero >> ");
            scanf("%X", &num);
            printf("%d\t%X\t%o\n", num, num, num);
        break;
        default:
            return 0;
        break;
    }

    return 0;
}
