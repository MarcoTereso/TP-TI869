#include <stdio.h>
#include <stdlib.h>

void calcularAreaRetangulo(){
     float a,b;
    printf("\nDigite o primeiro valor: ");
    scanf("%f",&a);
    printf("\nDigite o segundo valor: ");
    scanf("%f",&b);
    float area =(a*b);
    printf("Area = %.1f\n",area);
    
}
int main(){
   calcularAreaRetangulo();
    return 0;
}