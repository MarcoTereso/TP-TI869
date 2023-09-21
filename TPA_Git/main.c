#include <stdio.h>
#include <stdlib.h>

void perimetroTriangulo()
{
    int verifica;
    float b, l1, l2;
    printf("Insira a base: ");
    do
    {
        fflush(stdin);
        verifica=scanf("%f", &b);
    }while(verifica!=1 || b<=0);
    printf("Insira o primeiro lado: ");
    do
    {
        fflush(stdin);
        verifica=scanf("%f", &l1);
    }while(verifica!=1 || l1<=0);
    printf("Insira o segundo lado: ");
    do
    {
        fflush(stdin);
        verifica=scanf("%f", &l2);
    }while(verifica!=1 || l2<=0);
    printf("Perímetro do triângulo é %f",(b+l1+l2));
}

int main()
{
    printf(">>>> MENU! <<<<\n");
    return 0;
}
