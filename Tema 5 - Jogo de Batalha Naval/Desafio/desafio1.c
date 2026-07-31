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

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaNavioHorizontal = 2; // linha onde o navio horizontal começa
    int colunaNavioHorizontal = 4; // coluna inicial
    int linhaNavioVertical = 5;   // linha inicial do navio vertical
    int colunaNavioVertical = 7;  // coluna onde o navio vertical começa

    // Posiciona navio horizontal (3 casas)
    for (int i = 0; i < TAM_NAVIO; i++) {
        // valida se está dentro do tabuleiro
        if (colunaNavioHorizontal + i < TAM_TABULEIRO) {
            tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = NAVIO;
        }
    }

    // Posiciona navio vertical (3 casas)
    for (int i = 0; i < TAM_NAVIO; i++) {
        // valida se está dentro do tabuleiro
        if (linhaNavioVertical + i < TAM_TABULEIRO) {
            // evita sobreposição
            if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] == AGUA) {
                tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = NAVIO;
            }
        }
    }

    // Exibe o tabuleiro
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
