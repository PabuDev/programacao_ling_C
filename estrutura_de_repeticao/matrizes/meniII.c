#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void operacaoBasica(int operacao, int primeiroNum, int segundoNum);
void imprimirResultado(float resultadoFinal);

int main(){
 //Declaração de Variáveis
 int operacao, primeiroNum, segundoNum, op; 
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
        operacaoBasica(operacao, primeiroNum, segundoNum);
        
    }
 }while (true);


 

  return 0;
}

void imprimirResultado(float resultadoFinal){

    printf("Resultado: %f\n", resultadoFinal);

}

void operacaoBasica( int operacao, int primeiroNum, int segundoNum){
    int primeiroNum, segundoNum;
    float resultadoFinal;
    
    switch (operacao)
    {
    case 1:
        resultadoFinal = primeiroNum + segundoNum;
        break;
        
        case 2:
            if(segundoNum == 0){
                printf("Operação inválida!!");
                printf("Zero não pode ser divisor!!\n");
            }else{
                resultadoFinal = primeiroNum / segundoNum;
                printf("O resultado da divisao %f / %f = %f.", primeiroNum, segundoNum, resultadoFinal);
            }
        break;

        case 3:
            resultadoFinal = primeiroNum * segundoNum;
        break;

        case 4:
            resultadoFinal = primeiroNum - segundoNum;
        break;
    
        default:
        printf("Opção Inválida!!");
        break;
    }

    imprimirResultado(resultadoFinal);
    
    
}



