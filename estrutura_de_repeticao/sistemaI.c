#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis
    float nume, deno;
    float sistema, sistemaFinal;

    sistema = 0;
    sistemaFinal = 0;
    //Processamento
    for(int i = 1; i <= 20; i++){
        deno = i;
        nume = 1;
        sistema = sistema + nume / deno;
        sistemaFinal = nume / deno;
        printf("%f / %f = %f\n", nume, deno, sistemaFinal);
       
    }
    printf("O resultado do sistema e = %f", sistema);

    printf("\n");
    system("pause");

    return 0;
}