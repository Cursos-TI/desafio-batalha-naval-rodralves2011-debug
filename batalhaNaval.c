#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
       
    // Tamanho do tabuleiro
    const int linhas = 5;
    const int colunas = 5;

    // Vetores para armazenar coordenadas dos navios
    int navioVertical [3][2]; // navio com 3 partes (linha, coluna)
    int navioHorizontal [4][2]; // navio com 4 partes (linha, coluna)

    // Posição dos navios vertical (coluna fixa linha diferente)
    int colunaV = 2; // coluna fixa
    int linhaInicialV = 4; // começa na linha 4
    for (int i = 0; i < 3; i++){
        navioVertical[i][0] = linhaInicialV + i; // linha
        navioVertical[i][1] = colunaV; // coluna
    }
    //posição do navio horizontal (linha fixa coluna diferente)
    int linhaH = 3; //linha fixa
    int colunaInicialH = 5; // começa na coluna 5
    for (int i = 0; i < 4; i++) {
        navioHorizontal[i][0] = linhaH;  //linha
        navioHorizontal[i][1] = colunaInicialH + i; // coluna
    }

    // Coordenadas dos navios
    printf("=== Coordenandas dos Navios ===\n")

    printf("\nNavio Vertical ( 3 partes):\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d -> Linha: %d | coluna: %d\n")
    }



    }
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
