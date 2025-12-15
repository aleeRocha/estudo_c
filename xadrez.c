#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Movimento da peça torre, cinco casas para a direita, implementado de forma recursiva.
void moverTorre(int casas){
    if (casas > 0) {
       printf("Direita. \n");
       moverTorre(casas -1);
    }
}

// Movimento da peça bispo, cinco casas na diagonal, implementado com recursividade e loops aninhados.
void moverBispo(int casasVertical, int casasHorizontal){
    if (casasVertical == 0 && casasHorizontal == 0) 
    return;
       for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima, Direita. \n");
            }
        }
        moverBispo(casasVertical -1, casasHorizontal -1);
    
}

// Movimento da peça rainha, oito casas para a esquerda, implementado de forma recursiva.
void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda. \n");
        moverRainha(casas -1);
    }
}

// Movimentação do cavalo implementado com loops aninhados, continue e break.
void moverCavalo() {

    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 0; i < movimentosCima + 1; i++) {

        for (int j = 0; j < movimentosDireita + 1; j++) {
            
            if (i < movimentosCima && j == 0) {
                printf("Cima. \n");
                continue;
            }

            if (i == movimentosCima && j < movimentosDireita) {
                printf("Direita. \n");
            }
            
            if (i == movimentosCima && j == movimentosDireita) {
                break;
            }
            
        }
    }
    
}


int main() {
    
    // Variáveis para determinar quantas casas cada peça deve se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    

    printf("**** Desafio movimentação de peças de xadrez ****\n");
    printf("\n");

    
    printf("\n Movimentação da peça torre, cinco casas para a direita.\n");
    moverTorre(casasTorre);


    printf("\n Movimentação da peça bispo, cinco casas na diagonal.\n");
    moverBispo(casasBispo, casasBispo);


    printf("\n Movimentação da peça rainha, oito casas para a esquerda.\n");
    moverRainha(8);


    printf("\nMovimentação da peça cavalo, duas casas para cima e uma para a direita.\n");
    moverCavalo();
    

    return 0;
}