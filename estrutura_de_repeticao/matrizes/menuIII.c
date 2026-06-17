#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    //Declaração de Variáveis
    int primeiroNum, segundoNum, operacao;
    float resultado;

    //Entrada de Dados
    do{
    printf(" ---- OPERACAO ---- ");
    printf(" 1 - SOMA\n 2 - DIVISAO\n 3 - MULTIPLICAO\n 4 - SUBTRACAO\n");
    scanf("%d", &operacao);
    if(operacao >= 0 || operacao <= 4){
        printf("Digite o primeiro numero: ");
        scanf("%d", &primeiroNum);
        printf("Digite o segundo numero: ");
        scanf("%d", &segundoNum);
    }
    }while(true);
}