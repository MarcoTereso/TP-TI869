#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1,v2,v3;
    int op;
    setlocale(LC_ALL, "Portuguese");
    do{
        printf(">>>> MENU TRIGONOMETRIA <<<<\n");
        printf("1 - Calcular área do circulo\n");
        printf("2 - Calcular área do quadrado\n");
        printf("3 - Calcular área do retângulo\n");
        printf("4 - Calcular área do triângulo\n");
        printf("5 - Calcular área da esfera\n");
        printf("6 - Calcular perímetro do circulo\n");
        printf("7 - Calcular perímetro do retângulo\n");
        printf("8 - Calcular perímetro do triângulo\n");
        printf("9 - Calcular perímetro do octagono\n");
        printf("10 - Calcular quadrado de um número\n");
        printf("11 - Calcular cubo de um número\n");
        printf("12 - Calcular potência de um número\n");
        printf("13 - Multiplicação de 2 números\n");
        printf("14 - Soma de 2 números\n");
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

                    printf("Insira um valor válido entre 1 e 15\n");
        }
    }while(op!=15);
}
