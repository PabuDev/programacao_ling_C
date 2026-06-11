#include <stdio.h>
#include <stdlib.h>

void formas(int forma);
void imprimirMatriz(char matriz[10][10], int linhas, int colunas);

int main() {
    int forma = 0;

    do {
        printf("\nEscolha uma forma (1 a 8):\n");
        printf("1 - Diagonal principal\n");
        printf("2 - Diagonal secundaria\n");
        printf("3 - Borda\n");
        printf("4 - X\n");
        printf("5 - Triangulo superior esquerdo\n");
        printf("6 - Triangulo superior direito\n");
        printf("7 - Triangulo inferior esquerdo\n");
        printf("8 - Quadrado central\n");
        printf("Opcao: ");
        scanf("%d", &forma);
        if(forma == 9){
            printf("Voce saiu do Programa!!\n\n");
            break;
        }else{
            if (forma < 1 || forma >= 10) {
            printf("\nOpcao invalida!\n Digite um numero entre 1 e 8.\n\n");
            }
        }
        formas(forma);
    } while (forma < 1 || forma > 8);

    return 0;
}

void imprimirMatriz(char matriz[10][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void formas(int forma) {
    char formasTabela[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            formasTabela[i][j] = ' ';
        }
    }

    if (forma == 1){
        for (int i = 0; i < 10; i++) {
                formasTabela[i][i] = '*';
        }
    }else{
        if (forma == 2){
            for (int i = 0; i < 10; i++) {
                formasTabela[i][9 - i] = '*';
            }
        }else{
            if(forma == 3){
                for (int i = 0; i < 10; i++) {
                formasTabela[0][i] = '*';
                formasTabela[9][i] = '*';
                formasTabela[i][0] = '*';
                formasTabela[i][9] = '*';
            }
            }else{
                if(forma == 4){
                    for (int i = 0; i < 10; i++) {
                        formasTabela[i][i] = '*';
                        formasTabela[i][9 - i] = '*';
                    }
                }else{
                    if(forma == 5){
                        for (int i = 0; i < 10; i++) {
                        for (int j = 0; j <= i; j++) {
                            formasTabela[i][j] = '*';
                        }
                    }
                    }else{
                        if(forma == 6){
                            for (int i = 0; i < 10; i++) {
                                for (int j = 9; j >= i; j--) {
                                    formasTabela[i][j] = '*';
                                }
                            }
                        }else{
                            if(forma == 7){
                                for (int i = 0; i < 10; i++) {
                                    for (int j = 0; j <= i; j++) {
                                        formasTabela[9 - i][j] = '*';
                                    }
                                }
                            }else{
                                if(forma == 8){
                                    for (int i = 3; i < 7; i++) {
                                        for (int j = 3; j < 7; j++) {
                                            formasTabela[i][j] = '*';
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }








    /*
    switch (forma) {
        case 1:
            for (int i = 0; i < 10; i++) {
                formasTabela[i][i] = '*';
            }
            break;
        case 2:
            for (int i = 0; i < 10; i++) {
                formasTabela[i][9 - i] = '*';
            }
            break;
        case 3:
            for (int i = 0; i < 10; i++) {
                formasTabela[0][i] = '*';
                formasTabela[9][i] = '*';
                formasTabela[i][0] = '*';
                formasTabela[i][9] = '*';
            }
            break;
        case 4:
            for (int i = 0; i < 10; i++) {
                formasTabela[i][i] = '*';
                formasTabela[i][9 - i] = '*';
            }
            break;
        case 5:
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j <= i; j++) {
                    formasTabela[i][j] = '*';
                }
            }
            break;
        case 6:
            for (int i = 0; i < 10; i++) {
                for (int j = 9; j >= i; j--) {
                    formasTabela[i][j] = '*';
                }
            }
            break;
        case 7:
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j <= i; j++) {
                    formasTabela[9 - i][j] = '*';
                }
            }
            break;
        case 8:
            for (int i = 3; i < 7; i++) {
                for (int j = 3; j < 7; j++) {
                    formasTabela[i][j] = '*';
                }
            }
        default:
            printf("Forma inexistente.\n");
            return;
    }
*/
    imprimirMatriz(formasTabela, 10, 10);
}