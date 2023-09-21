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
        printf("Entrada inválida!\n");
    else
        printf("%.6f ^ %d = %.6f\n", value, power, math_pow(value, power));
}

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
    printf("Per�metro do tri�ngulo � %f",(b+l1+l2));
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
        scanf("%i", &op);
        switch(op){
            case 15: break;
            case 1:

                    break;
            case 2:
                area_quadrado();
                    break;
            case 3:

                    break;
            case 4:
                void areaTriangulo();
                {
                float b, a, op;
                printf("\nInsira o valor da base:\n");
                scanf("%f", &b);
                printf("\nInsira o valor do altura:\n");
                scanf ("%f",&a) ;
                op=(b*a)/2;

                        printf("a Area do Triangulo é: %f",op);
                }
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
                    potencia();
                    break;
            case 13:
                    calculoMulti();
                    break;
            case 14:

                    break;
            default:
                    printf("Insira um valor v�lido entre 1 e 15\n");
        }
    }while(op!=15);

<<<<<<< HEAD
=======
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

>>>>>>> 6321016f96abf0662a866cc7498405c79bef53e3
}
