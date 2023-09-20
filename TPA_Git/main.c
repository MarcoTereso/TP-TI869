#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

void perimetroCirculo()
{
    float raio, per;
    printf("Digite o valor do Raio:  ");
    scanf("%f", &raio);
    per = 2 * PI * raio;
    printf("O perímetro do círculo é %.2f\n", per);
}

int main()
{
    printf(">>>> MENU! <<<<\n");
    return 0;
}
