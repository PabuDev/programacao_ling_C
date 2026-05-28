#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis 
    int tempoSegundos, horas, minutos, segundos;

    //Entrada de Dados
    printf("Digite um valor sem segundo: ");
    scanf("%d", &tempoSegundos);

    //Processamento de Dados
    horas = tempoSegundos / 3600;
    tempoSegundos = tempoSegundos % 3600;
    minutos = tempoSegundos / 60;
    segundos = tempoSegundos % 60;

    //Saída de Dados
    printf("O tempo informado corresponde a %02dH:%02dM:%02dS.", horas, minutos, segundos);

    printf("\n");
    return 0;

}