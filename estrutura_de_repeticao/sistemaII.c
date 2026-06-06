#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Declaração de Variáveis
    float nume, deno;
    float sistema, sistemaFinal;

    sistema = 0;
    sistemaFinal = 0;
    //Processamento
    for(int i = 1; i <= 20; i++){
        deno = i * 3;
        nume = pow(2, 1 + i);
        sistema = sistema + nume / deno;
        sistemaFinal = nume / deno;
        printf("%f / %f = %f\n", nume, deno, sistemaFinal);
       
    }
    printf("O resultado do sistema e = %f", sistema);

    printf("\n");
    system("pause");

    return 0;
}