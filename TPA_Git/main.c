#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.1415

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

void areaCirculo(){
    float r;
    do {
        printf("Insira o raio (deve ser maior que 0): ");
        scanf("%f", &r);
        if (r <= 0) {
            printf("O raio deve ser maior que 0. Tenta outravez amigo!.\n");
        }
    } while (r <= 0);
    printf(" A �rea do c�rculo � %.2f\n", PI*r*r);
}


int main()
{

    float v1,v2,v3;
    int op;
    setlocale(LC_ALL, "Portuguese");
    do{
        printf(">>>> MENU TRIGONOMETRIA <<<<\n");
        printf("1 - Calcular �rea do circulo\n");
        printf("2 - Calcular �rea do quadrado\n");
        printf("3 - Calcular �rea do ret�ngulo\n");
        printf("4 - Calcular �rea do tri�ngulo\n");
        printf("5 - Calcular �rea da esfera\n");
        printf("6 - Calcular per�metro do circulo\n");
        printf("7 - Calcular per�metro do ret�ngulo\n");
        printf("8 - Calcular per�metro do tri�ngulo\n");
        printf("9 - Calcular per�metro do octagono\n");
        printf("10 - Calcular quadrado de um n�mero\n");
        printf("11 - Calcular cubo de um n�mero\n");
        printf("12 - Calcular pot�ncia de um n�mero\n");
        printf("13 - Multiplica��o de 2 n�meros\n");
        printf("14 - Soma de 2 n�meros\n");
        printf("15 - Sair\n");
        scanf("%i", &op);
        switch(op){
            case 15: break;
            case 1:

                    break;
            case 2:

                    break;
            case 3:

                    break;
            case 4:

                    break;
            case 5:

                    break;
            case 6:

                    break;
            case 7:

                    break;
            case 8:

                    break;
            case 9:

                    break;
            case 10:

                    break;
            case 11:

                    break;
            case 12:

                    break;
            case 13:

                    break;
            case 14:

                    break;
            default:

                    printf("Insira um valor v�lido entre 1 e 15\n");
        }
    }while(op!=15);

}
