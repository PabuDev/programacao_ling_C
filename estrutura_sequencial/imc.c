#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Delcaração de Variáveis
    float pesoUsuario, alturaUsuario;

    //Entrada de Dados
    printf("Digite o seu peso: ");
    scanf("%f", &pesoUsuario);
    printf("Digite a sua altura: ");
    scanf("%f", &alturaUsuario);

    //Processamento de Dados
    float imcUsuario;
    imcUsuario = pesoUsuario / pow(alturaUsuario,2);

    //Saída de Dados
    printf("O IMC do usuario com o peso %.2fkg e altura %.2f metros, e de %.2f", pesoUsuario, alturaUsuario, imcUsuario);

    printf("\n");
    system("pause");

    return 0;
}