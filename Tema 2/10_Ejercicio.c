#include <stdio.h>
#include <stdio.h>
#define PI 3.14

int main() {
    int grados;
    float radianes;
    
    printf("Introduce los grados >> ");
    scanf("%d", &grados);
    
    radianes = (PI / 180) * grados;
    
    printf("\nGRADOS\tRADIANES\n");
    printf("%d\t%f\n",grados, radianes);
    
    return 0;
}