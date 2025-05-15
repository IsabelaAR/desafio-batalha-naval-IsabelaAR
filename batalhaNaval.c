#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int coluna[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    int horizontal[3] = {3, 3, 3};
    int vertical[3] = {3, 3, 3};

    //Navio horizontal em [8][3-5]
    for (int j = 3; j < 6; j++){
        tabuleiro[8][j] = horizontal[j - 3]; //Para acessar os índices 0-2 do meu array horizontal
    }

    //Navio vertical em [0-2][9]
    for (int i = 0; i < 3; i++){
        tabuleiro[i][9] = vertical[i];
    }

    //Imprimindo meu array linha
    printf ("    "); //Para ficar alinhado com a matriz
    for (int i = 0; i < 10; i++){
        printf ("%c  ", linha[i]);
    }
    printf ("\n");

    //Imprimindo minha matriz
    for (int i = 0; i < 10; i++){
        printf ("\n");
        printf ("%d   ", coluna[i]); //Imprimindo meu array coluna
        for (int j = 0; j < 10; j++){
            printf ("%d  ", tabuleiro[i][j]);
        }
    }

    printf ("\n\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
