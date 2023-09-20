#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415


//DEFINE PI 3.14.15

void areaEsfera(){

    float raio, area;


    printf("Digite valor do raio: ");
    scanf("%f", &raio);

    area = 4*PI*raio;

    printf("\nArea da esfera : %.2f", raio);
}
