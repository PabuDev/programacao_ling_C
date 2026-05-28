#include <stdio.h>
#include <stdlib.h>

int main(){
    //Delcaração de Variáveis
    int numero, numeroInvertido;

    //Entrada de dados
    printf("Digite um numero com quatro digito: ");
    scanf("%d", &numero);

    //Processamento de Inversão de Número
    int d1, d2, d3, d4;

    d1 = numero / 1000; 
    d2 = (numero / 100) % 10;
    d3 = (numero / 10) % 10;
    d4 = numero % 10;

    numeroInvertido = d1 + (d2 * 10) + (d3 * 100) + (d4 * 1000);

    //Saída de dados
    printf("O numero %d invertido e igual a %d", numero, numeroInvertido);

    printf("\n");
    system("pause");

    return 0;

}