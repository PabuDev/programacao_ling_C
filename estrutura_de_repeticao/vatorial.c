#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração Variáveis
    int numero, vatorialNumero = 1;

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //Processamento de dados

    for (int i = numero; i != 1; i--){
        vatorialNumero =  vatorialNumero * i;
    }
    
    //Saída de Dados
    printf("%d! = %d", numero, vatorialNumero);

    printf("\n");
    system("pause");
    return 0;
}