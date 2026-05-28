#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis 
    float grauFahrenheit;

    //Entrada de Dados
    printf("Digite o uma temperatura em Fahrenheit: ");
    scanf("%f", &grauFahrenheit);

    //Processamento de Dados
    float grauCentigrados;

    grauCentigrados = (5.0/9)*(grauFahrenheit-32);

    //Saída de Dados
    printf("O grau %.2f em Fahrenheit é igual a %.2f em Centigrados.", grauFahrenheit, grauCentigrados);

    printf("\n");
    system("pause");

    return 0;
}