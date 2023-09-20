#include <stdio.h>
#include <stdlib.h>

void calculoMulti();

int main()
{
    calculoMulti();
    return 0;
}


void calculoMulti(){

    float v1,v2,multi;
    int dec;

    do{

    fflush(stdin);
    printf("Insira o 1º valor: ");
    dec = scanf("%f", &v1);
    }while(dec != 1 || v1 <= 0);
    do{
    fflush(stdin);
    printf("Insira o 2º valor: ");
    dec = scanf("%f", &v2);

    }while(v2 <= 0 || dec != 1);

    multi = v1*v2;

    printf("Resultado: %.2f",multi);

}
