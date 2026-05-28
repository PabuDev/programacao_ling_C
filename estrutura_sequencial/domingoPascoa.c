#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaração de Variáveis 
    int dia, mes, ano;
    int a, b, c, d, e, f, g, h, i, j, l, m;

    //Entrada de Dados
    printf("Digite o ano desejado: ");
    scanf("%d", &ano);

    //Processamento de Dados
    a = ano % 19;
    b = ano / 100;
    c = ano % 100;
    d = b / 4;
    e = b % 4;
    f = (b + 8) / 25;
    g = (b - f + 1) / 3;
    h = (19 * a + b - d - g + 15) % 30;
    i = c / 4;
    j = c % 4;
    l = (32 + 2 * e + 2 * i - h - j) % 7;
    m = (a + 11 * h + 22 * l) / 451;
    mes = (h + l - 7 * m + 114) / 31;
    dia = ((h + l - 7 * m + 114) % 31) + 1;


    //Saida de Dados
    printf("\nA Pascoa do ano de %d sera no dia %d do mes %d\n", ano, dia, mes);
    system("pause");

    return 0;
}