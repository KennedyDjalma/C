#include <stdio.h>

#define TAM_TABULEIRO 10   // tamanho fixo do tabuleiro
#define TAM_NAVIO 3        // tamanho fixo dos navios
#define AGUA 0             // valor para água
#define NAVIO 3            // valor para navio

int main() {
    // Declaração do tabuleiro 10x10
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicializa todas as posições com água (0)
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // ============================
    // Coordenadas iniciais dos navios
    // ============================

    // Navio horizontal
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;

    // Navio vertical
    int linhaNavioVertical = 5;
    int colunaNavioVertical = 7;

    // Navio diagonal principal (↘)
    int linhaNavioDiagonal1 = 1; // 0
    int colunaNavioDiagonal1 = 1;// 0

    // Navio diagonal secundária (↙)
    int linhaNavioDiagonal2 = 1; // 0
    int colunaNavioDiagonal2 = 9;

    // ============================
    // Posicionamento dos navios
    // ============================

    // Navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (colunaNavioHorizontal + i < TAM_TABULEIRO) {
            if (tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] == AGUA) {
                tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = NAVIO;
            }
        }
    }

    // Navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linhaNavioVertical + i < TAM_TABULEIRO) {
            if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] == AGUA) {
                tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = NAVIO;
            }
        }
    }

    // Navio diagonal principal (↘)
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linhaNavioDiagonal1 + i < TAM_TABULEIRO && colunaNavioDiagonal1 + i < TAM_TABULEIRO) {
            if (tabuleiro[linhaNavioDiagonal1 + i][colunaNavioDiagonal1 + i] == AGUA) {
                tabuleiro[linhaNavioDiagonal1 + i][colunaNavioDiagonal1 + i] = NAVIO;
            }
        }
    }

    // Navio diagonal secundária (↙)
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linhaNavioDiagonal2 + i < TAM_TABULEIRO && colunaNavioDiagonal2 - i >= 0) {
            if (tabuleiro[linhaNavioDiagonal2 + i][colunaNavioDiagonal2 - i] == AGUA) {
                tabuleiro[linhaNavioDiagonal2 + i][colunaNavioDiagonal2 - i] = NAVIO;
            }
        }
    }

    // ============================
    // Exibição do tabuleiro
    // ============================
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
