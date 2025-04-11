#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {


    printf("\n### DESAFIO DE XADREZ NIVEL NOVATO ###\n");
    // Quantidade de casas para cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Movimento da TORRE: 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");  // Imprime o movimento da Torre
    }

    // Movimento do BISPO: 5 casas na diagonal para cima e direita usando WHILE
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");   // Imprime o movimento do Bispo
        i++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");  // Imprime o movimento da Rainha
        j++;
    } while (j <= movimentoRainha);

    return 0;
}
