#include <stdio.h>
#include <stdlib.h>


int ExibeTabuleiro(char letras[20], int tabuleiro[10][10]){ // Imprime o tabuleiro 
    system('cls'||'clear');
    printf("-- B A T A L H A -- N A V A L --\n\n");
    int col = 1;

    for (int f = 0; f<10; f++){ // Imprimindo Linha de letras
        f == 0? printf("  "):0;
        printf("  %c", letras[f]); 
        f == 9? printf("\n\n"):0;
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

int LimpaMatriz(int tabuleiro[10][10]){ // Setando todos os valores da matriz para zero
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            tabuleiro[i][j] = 0; 

        }
    }
}

int GerarNavio(int tabuleiro[10][10], int posicao1, int posicao2){ // Gerando navios e fazendo validações

    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'}; 

    posicao1 = letras[posicao1]; //Tratando entradas...
    posicao2 = posicao2 - 1;     //para que fiquem como no jogo real

    if (posicao2 > 9){ // validando posição no tabuleiro
        printf("Insira uma posição válida");
        return 0;

    }
    if (tabuleiro[posicao1][posicao2] == 3){ // validando posição ocupada
        printf("Já existe um navio nessa posição");
        return 0;
    }

    tabuleiro[posicao2][posicao1] = 3; // gerando navio
}

int main(){

    int tabuleiro[10][10]; // Setando matriz do tabuleiro
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Criando lista de letras
    LimpaMatriz(tabuleiro);
    GerarNavio(tabuleiro,'A',1);
    ExibeTabuleiro(letras, tabuleiro);
    
}