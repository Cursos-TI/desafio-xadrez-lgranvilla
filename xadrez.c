#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



// Função recursiva para movimento da Torre (Direita)
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre (casas - 1);
    }
}

// Função recursiva para o movimento do Bispo ( diagonal pra cima e direita)
void moverBispo(int casas){
    if(casas > 0){
        printf("Cima direita\n");
        moverBispo (casas - 1);
    }
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha (casas - 1);
    }
}

// Movimento Loops complexos aninhados e multiplas variáveis
void moverCavaloComplexo(){
    printf("\nMovimento do cavalo (duas casas para cima e uma para a direita):\n");

    int maxVertical = 2;
    int maxHorizontal = 1;

    for (int i = 0; i <= maxVertical; i++){
        if (i < 2){
            for (int j = 1; j <= maxHorizontal; j++){
                printf("Cima\n");
            }
        } else {
            printf("Direita\n");
        }
    }
}

// Movimento Bispo com Loops aninhados: vertical e horizontal.

void moverBispoAninhado (int casas){
    printf("\nMovimento do bispo com Loops aninhados:\n");
    for (int v = 1; v <= casas; v++){
        printf("vertical cima\n");
        for (int h = 1; h <= casas; h++){
            if (h == v) {
                printf("Horizontal: Direita (Diagonal Cima Direita)\n");
                break; // simula a diagonal
            }
        }
    }
}

int main(){
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    
    //Movimento da TORRE
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);

    // Movimento BISPO (Recursividade)
    printf("\nMovimento Bispo:\n");
    moverBispo(movimentoBispo);

    // Movimento RAINHA (Recursividade)
    printf("\nMovimento Rainha:\n");
    moverRainha(movimentoRainha);

    // Movimento CAVALO com Loops Complexos.
    moverCavaloComplexo();

    //Movimento BISPO com Loops aninhados
    moverBispoAninhado(movimentoBispo);
    return 0;
}
