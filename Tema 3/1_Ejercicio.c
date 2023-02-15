#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
	int v1, v2, v3;
	float modulo, media, vector1, vector2, vector3;
	
	printf("Introduce el primer vector >> ");
	scanf("%d", &v1);
	printf("Introduce el segundo vector >> ");
	scanf("%d", &v2);
	printf("Introduce el tercer vector >> ");
	scanf("%d", &v3);
    
    modulo = sqrt(pow(v1, 2) + pow(v2, 2) + pow(v3, 2));
    media = (v1 + v2 + v3) / 3;
    vector1 = v1 / media;
    vector2 = v2 / media;
    vector3 = v3 / media;
    
    printf("\nModulo del vector >> %f\n",modulo);
    printf("Media del vector >> %f\n",media);
    printf("Vector unitario >> (%f , %f , %f)\n",vector1, vector2, vector3);

    return 0;
}