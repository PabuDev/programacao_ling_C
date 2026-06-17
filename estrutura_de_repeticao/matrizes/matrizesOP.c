#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis
    int primeiraMatriz[3][3], segundoMatriz[3][3];

    //Adicionando Valores na Primeira Matriz
    printf(" -- PRIMEIRA MATRIZ --\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero para linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &primeiraMatriz[i][j]);
        }
    }
    //Adicionando Valores na Segundo Matriz
    printf(" -- SEGUNDO MATRIZ --\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero para linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &segundoMatriz[i][j]);
        }
    }
    printf(" -- PRIMEIRA MATRIZ --\n");
    //Imprimindo a Primeira Matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d ", primeiraMatriz[i][j]);
        }printf("\n");
    }
    printf(" -- SEGUNDO MATRIZ --\n");
    //Imprimindo a Segundo Matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d ", segundoMatriz[i][j]); 
        }printf("\n");
    }

    //Processamento - Multiplicação
    printf("\n -- MULTIPLICAÇÂO -- ");
    int terceiraMatriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            terceiraMatriz[3][3] = 0;
            for(int k = 0; k < 3; k++){
                terceiraMatriz[i][k] = primeiraMatriz[i][k] * segundoMatriz[i][k] + primeiraMatriz[i][k] * segundoMatriz[i][k];
            }
        }
    }
    printf(" \n-- SEGUNDO MATRIZ --\n");
    //Imprimindo a Terceira Matriz - Resultante da Multiplicação
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d ", terceiraMatriz[i][j]); 
        }printf("\n");
    }

    system("pause");
    return 0;
}