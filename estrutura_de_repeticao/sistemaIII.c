#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Variáveis
    float nume, deno, sistema, sistemaFinal;

    sistema = 0;
    sistemaFinal = 0;

    //Processamento
    for(int i = 0; i <= 20; i++){
        nume = pow(2, 1 + i);
        deno = nume - 1;
        sistema = sistema + nume / deno;
        sistemaFinal = nume / deno;
        printf("%f / %f = %f\n", nume, deno, sistemaFinal);
       
    }
    printf("O resultado do sistema e = %f", sistema);

    printf("\n");
    system("pause");

    return 0;
}