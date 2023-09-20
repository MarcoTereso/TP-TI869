#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

void areaCirculo(){
    float r;
    do {
        printf("Insira o raio (deve ser maior que 0): ");
        scanf("%f", &r);
        if (r <= 0) {
            printf("O raio deve ser maior que 0. Tenta outravez amigo!.\n");
        }
    } while (r <= 0);
    printf(" A Área do círculo é %.2f\n", PI*r*r);
}

int main()
{
    printf(">>>> MENU! <<<<\n");

    return 0;
}
