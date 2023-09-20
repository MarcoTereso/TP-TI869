#include <stdio.h>
#include <stdlib.h>

void area_quadrado()
{
    float valor;
    float area;
    int verifica;
    do
    {    
        fflush(stdin);
        printf("Digite o valor do lado: ");
        //verificacao
        verifica = scanf("%f",&valor);
        system("cls");

    }   while((verifica) = 1 && valor <=0 );// ou while((verifica) != 1 || valor <=0 )
        area=valor*valor;
    printf("A Area do quadrado de lado %.2f = %.2f",valor,area);
}

int main()
{
    printf(">>>> MENU! <<<<\n");
    area_quadrado();
    return 0;
}
