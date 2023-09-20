#include <stdio.h>
#include <stdlib.h>

void perimetroTriangulo()
{
    int verifica;
    float b, l1, l2;
    printf("Insira a base: ");
    do
    {
        verifica=scanf("%f", &b);
    }while(verifica!=1 || b<=0);
    printf("Insira o primeiro lado: ");
    do
    {
        verifica=scanf("%f", &l1);
    }while(verifica!=1);
    printf("Insira o segundo lado: ");
    do
    {
        verifica=scanf("%f", &l2);
    }while(verifica!=1);
    printf("Perímetro do triângulo é %f",(b+l1+l2));
}

int main()
{
    printf(">>>> MENU! <<<<\n");
    return 0;
}
