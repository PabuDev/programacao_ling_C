#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void operacaoBasica(int num1, int num2);

int main(){
 //Declaração de Variáveis
 int operacao;

 //Entrada de Dados
 do{
    prinft(" ---- OPERACAO ---- ");
    printf(" 1 - SOMA\n 2 - DIVISAO\n 3 - MULTIPLICAO\n 4 - SUBTRACAO\n");
    scanf("%d", &operacao);
    if(operacao > 0 || operacao <= 4)
 }while (true);


 

  return 0;
}

void operacaoBasica(int num1, int num2);



