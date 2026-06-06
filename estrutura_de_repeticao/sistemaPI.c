#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Variáveis
    float nume, deno, pi, pi_s;
    int operador = 0;
    
    pi_s = 0;
    pi = 0;

    //Processamento
    for(int i = 0; i <= 20; i++){
        nume = 4;
        deno = pow(2, 1 + i) - 1;
        pi = pi + nume / deno + operador;
        pi_s = nume / deno + operador;
        operador = -1;
        printf("%f / %fdeno = %f\n", nume, deno, pi_s);

    }
    printf("\nO valor final de PI = %f\n", pi);

    system("pause");

    return 0;
}