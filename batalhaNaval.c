#include <stdio.h>

#define SOMA 0
#define TAM 10
#define TAM_NAV 3

int main() {

    int coluna[TAM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char linha[TAM] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[TAM][TAM] = {0};
    int horizontal[TAM_NAV] = {3, 3, 3};
    int vertical[TAM_NAV] = {3, 3, 3};
    int diagonal1[TAM_NAV] = {3, 3, 3};
    int diagonal2[TAM_NAV] = {3, 3, 3};
    int cone[3][5] = {
        {0, 0, 4, 0, 0},
        {0, 4, 4, 4, 0},
        {4, 4, 4, 4, 4}
    };
    int cruz[5][5] = {
        {0, 0, 5, 0, 0},
        {0, 0, 5, 0, 0},
        {5, 5, 5, 5, 5},
        {0, 0, 5, 0, 0},
        {0, 0, 5, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 7, 0, 0},
        {0, 7, 7, 7, 0},
        {7, 7, 7, 7, 7},
        {0, 7, 7, 7, 0},
        {0, 0, 7, 0, 0}
    };

    //Octaedro
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            tabuleiro[i][j] = octaedro[i][j];
        }
    }


     //Cruz
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            tabuleiro[i][5 + j] = cruz[i][j];
        }
    }

    //Cone
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            tabuleiro[7 + i][5 + j] = cone[i][j];
        }
    }

    //Navio horizontal em [8][3-5]
    for (int j = 3; j < 6; j++){
        tabuleiro[8][j] = horizontal[j - 3]; //Para acessar os índices 0-2 do meu array horizontal
    }

    //Navio vertical em [0-2][9]
    for (int i = 0; i < TAM_NAV; i++){
        tabuleiro[i][9] = vertical[i];
    }

    //Navio diagonal crescente [7-5][1-3]
    for (int i = 0; i < TAM_NAV; i++){
        tabuleiro[7 - i][i + 1] = diagonal1[i];
    }

    //Navio diagonal decrescente [3-5][6-8]
    for (int i = 0; i < TAM_NAV; i++){
        tabuleiro[5 + i][i + 7] = diagonal2[i];
    }

    //Imprimindo meu array linha
    printf ("    "); //Para ficar alinhado com a matriz
    for (int i = 0; i < TAM; i++){
        printf ("%c  ", linha[i]);
    }
    printf ("\n");

    //Imprimindo minha matriz
    for (int i = 0; i < TAM; i++){
        printf ("\n");
        printf ("%d   ", coluna[i]); //Imprimindo meu array coluna
        for (int j = 0; j < 10; j++){
            printf ("%d  ", tabuleiro[i][j]);
        }
    }

    printf ("\n\n");

    return 0;
}
