#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.1415



float calcularQuadradoNum(float num1, float num2)
{
    printf("Insira o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Insira o segundo n�mero: ");
    scanf("%f", &num2);
    float quadrado = num1 * num2;
    printf("O quadrado de %.2f * %.2f = %.2f\n", num1, num2, quadrado);
    return quadrado;
}

void calculoMulti();



void areaEsfera(){

    float raio, area;


    printf("Digite valor do raio: ");
    scanf("%f", &raio);

    area = 4*PI*raio;

    printf("\nArea da esfera : %.2f", raio);
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
    printf(" A área do círculo é %.2f\n", PI*r*r);
}


int areaTriangulo()
{
    float b, a, op;
   printf("\nInsira o valor da base:\n");
   scanf("%f", &b);
   printf("\nInsira o valor do altura:\n");
   scanf ("%f",&a) ;
   op=(b*a)/2;

    return op;
}

float math_pow(float value, int power)
{
    if (power < 0)
        return 1.0f / math_pow(value, -power);
    else if (power == 0)
        return 1;
    else
    {
        float res = value;
        while (--power) res *= value;
        return res;
    }
}

void potencia()
{
    float value;
    int power;
    printf("Valor: ");
    scanf("%f", &value);
    printf("Potência: ");
    scanf("%d", &power);
    if (value == 0 && power == -1)
        printf("Entrada inválida!");
    else
        printf("%.6f ^ %d = %.6f", value, power, math_pow(value, power));
}

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
        printf("13 - Multiplicacão de 2 números\n");
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
                    calcularQuadradoNum(v1,v2);
                    break;
            case 11:

                    break;
            case 12:

                    break;
            case 13:
                    calculoMulti();
                    break;
            case 14:

                    break;
            default:

                    printf("Insira um valor válido entre 1 e 15\n");
        }
    }while(op!=15);

}


void calculoMulti(){

    float v1,v2,multi;
    int dec;

    do{

    fflush(stdin);
    printf("Insira o 1� valor: ");
    dec = scanf("%f", &v1);
    }while(dec != 1 || v1 <= 0);
    do{
    fflush(stdin);
    printf("Insira o 2� valor: ");
    dec = scanf("%f", &v2);

    }while(v2 <= 0 || dec != 1);

    multi = v1*v2;

    printf("Resultado: %.2f",multi);

}
