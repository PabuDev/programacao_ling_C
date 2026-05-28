#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis
    int valor_saque;
    int qtd_nota_100, qtd_nota_50, qtd_nota_20, qtd_nota_10, qtd_nota_5;

    //Entrada de Dados
    printf("Informe o valor do saque: ");
    scanf("%d", &valor_saque);


    //Processamento de Dados
    qtd_nota_100 = valor_saque / 100; //Obtendo a quantidade de notas de 100
    valor_saque = valor_saque % 100; //Obtendo o valor restante após retirar as notas de 100
    qtd_nota_50 = valor_saque / 50; //Obtendo a quantidade de notas de 50
    valor_saque = valor_saque % 50; //Obtendo o valor restante após retirar as notas de 50
    qtd_nota_20 = valor_saque / 20; //Obtendo a quantidade de notas de 20
    valor_saque = valor_saque % 20; //Obtendo o valor restante após retirar as notas de 20
    qtd_nota_10 = valor_saque / 10; //Obtendo a quantidade de notas de 10
    valor_saque = valor_saque % 10; //Obtendo o valor restante após retirar as notas de 10
    qtd_nota_5 = valor_saque / 5; //Obtendo a quantidade de notas de 5
    valor_saque = valor_saque % 5; //Obtendo o valor restante após retirar as notas de 5

    //Saída de Dados
    
    printf("Quantidade de notas de 100: %d\n", qtd_nota_100);
    printf("Quantidade de notas de 50: %d\n", qtd_nota_50);
    printf("Quantidade de notas de 20: %d\n", qtd_nota_20);
    printf("Quantidade de notas de 10: %d\n", qtd_nota_10);
    printf("Quantidade de notas de 5: %d\n", qtd_nota_5);



    system("pause");
    printf("\n");
    return 0;
}