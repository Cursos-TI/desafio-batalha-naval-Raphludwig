#include <stdio.h>

#define TAM 5 // Tamanho do tabuleiro 5x5

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa o tabuleiro com 0 (vazio)
    
    // Posicionar navio horizontal (linha 1, colunas 1 a 3)
    int linhaH = 1;
    for (int col = 1; col <= 3; col++) {
        tabuleiro[linhaH][col] = 1; // 1 indica parte do navio
        printf("Navio Horizontal: (%d, %d)\n", linhaH, col);
    }

    // Posicionar navio vertical (coluna 4, linhas 2 a 4)
    int colunaV = 4;
    for (int lin = 2; lin <= 4; lin++) {
        tabuleiro[lin][colunaV] = 1;
        printf("Navio Vertical: (%d, %d)\n", lin, colunaV);
    }

    return 0;
}
