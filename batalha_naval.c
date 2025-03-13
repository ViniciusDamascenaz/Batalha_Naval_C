#include <stdio.h>

int main(){

    printf("-- B A T A L H A -- N A V A L --\n");

    int tabuleiro[10][10]; // Setando matriz do tabuleiro
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Criando lista de letras
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            tabuleiro[i][j] = 0; // Setando todos os valores da matriz para zero

        }
    }

    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3; // Colocando navio horizontal no tabuleiro
    tabuleiro[2][5] = 3;

    tabuleiro[7][8] = 3;
    tabuleiro[8][8] = 3; // Colocando navio vertical no tabuleiro
    tabuleiro[6][8] = 3;

    int col = 1;

    for (int f = 0; f<10; f++){ // Imprimindo Linha de letras
        f == 0? printf("  "):0;
        printf("  %c", letras[f]); 
        f == 9? printf("\n"):0;
    }

    for(int i = 0; i<10; i++){ // Imprimindo tabuleiro com coluna de numeros

        col == 10? printf("%d", col) : printf("%d ", col);
        col++;

        for(int j = 0; j<10; j++){
            printf("  %d", tabuleiro[i][j]);

        }
        printf("\n");
    }

}