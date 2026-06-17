#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    //Declaração de Variáveis
    int quantNumero;
    //Entrada e validação de dados
    do{
        printf("Digite a quantidade de numero que deseja digitar: ");
        scanf("%d", &quantNumero);
        if(quantNumero <= 0){
            printf("Valor invalido!!\n");
        }
    }while(quantNumero <= 0);
    //Entrada de Dados
    int vetor[quantNumero];
    for(int i = 0; i < quantNumero; i++){
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    //Processamento de Dados
    for(int pont = 0; pont < quantNumero; pont++){
        int impar = pont;
        for(int i = pont + 1; i < quantNumero; i++){
            if(vetor[i] % 2 != 0){
                impar = i;
            }
        }
        if(vetor[impar]!=vetor[pont]){
            int temporario = vetor[pont];
            vetor[pont] = vetor[impar];
            vetor[impar] = temporario;
    }
    }
    printf("Vetor organizado Impares na frente e pares atras\n");
    for(int i = 0; i < quantNumero; i++){
        printf(" %d ", vetor[i]);
    }
}
