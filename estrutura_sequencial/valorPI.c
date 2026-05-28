#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Declaração de Variáveis
    double raio, altura, areaBase, volumeCilindro;
    

    //Entrada de Dados
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    //Processamento de Dados
    areaBase = M_PI * (raio * raio);
    volumeCilindro = areaBase * altura;


    //Saída de Dados
    printf("A area da base e %.2lf.\n", areaBase);
    printf("O volume do cilindro e %.2lf.\n", volumeCilindro);

    system("pause");

    return 0;


}