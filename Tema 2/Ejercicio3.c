#include <stdio.h>
#include <stdio.h>

#define IVA 21.0

int main(){
    float precio_final, precio_bruto, impuesto;
    
    printf("Introduzca el precio del vehiculo >> ");
    scanf("%f", &precio_final);
    
    precio_bruto = precio_final + (precio_final * (IVA / 100));
    impuesto = precio_bruto - precio_final;
    
    printf("El impuesto es de %f euros\n",impuesto);
    
    return 0;
}