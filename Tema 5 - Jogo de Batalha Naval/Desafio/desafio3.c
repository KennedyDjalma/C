#include <stdio.h>
#include <stdlib.h>

#define TAM_TABULEIRO 10   // tamanho fixo do tabuleiro
#define TAM_NAVIO 3        // tamanho fixo dos navios
#define AGUA 0             // valor para água
#define NAVIO 3            // valor para navio
#define HABILIDADE 5       // valor para área de efeito das habilidades

#define TAM_HABILIDADE 5   // tamanho fixo das matrizes de habilidade

int main() {
    // ============================
    // Tabuleiro principal
    // ============================
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicializa todas as posições com água (0)
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // ============================
    // Posicionamento dos navios (igual ao nível anterior)
    // ============================
    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 4;
    int linhaNavioVertical = 5, colunaNavioVertical = 7;
    int linhaNavioDiagonal1 = 0, colunaNavioDiagonal1 = 0;
    int linhaNavioDiagonal2 = 0, colunaNavioDiagonal2 = 9;

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
    // Matrizes de habilidades
    // ============================
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];

    // Inicializa todas com 0
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            cone[i][j] = 0;
            cruz[i][j] = 0;
            octaedro[i][j] = 0;
        }
    }

    // Cone (forma triangular apontando para baixo)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = TAM_HABILIDADE/2 - i; j <= TAM_HABILIDADE/2 + i; j++) {
            if (j >= 0 && j < TAM_HABILIDADE) {
                cone[i][j] = 1;
            }
        }
    }

    // Cruz (linha central horizontal e vertical)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        cruz[TAM_HABILIDADE/2][i] = 1; // linha central
        cruz[i][TAM_HABILIDADE/2] = 1; // coluna central
    }

    // Octaedro (losango)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (abs(i - TAM_HABILIDADE/2) + abs(j - TAM_HABILIDADE/2) <= TAM_HABILIDADE/2) { //#include <stdlib.h> para usar o abs().
                octaedro[i][j] = 1;
            }
        }
    }

    // ============================
    // Sobreposição das habilidades no tabuleiro
    // ============================
    int origemConeLinha = 1, origemConeColuna = 1;
    int origemCruzLinha = 5, origemCruzColuna = 5;
    int origemOctaedroLinha = 7, origemOctaedroColuna = 3;

    // Função genérica de sobreposição
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linha = origemConeLinha + i - TAM_HABILIDADE/2;
            int coluna = origemConeColuna + j - TAM_HABILIDADE/2;
            if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                if (cone[i][j] == 1 && tabuleiro[linha][coluna] == AGUA) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linha = origemCruzLinha + i - TAM_HABILIDADE/2;
            int coluna = origemCruzColuna + j - TAM_HABILIDADE/2;
            if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                if (cruz[i][j] == 1 && tabuleiro[linha][coluna] == AGUA) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linha = origemOctaedroLinha + i - TAM_HABILIDADE/2;
            int coluna = origemOctaedroColuna + j - TAM_HABILIDADE/2;
            if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                if (octaedro[i][j] == 1 && tabuleiro[linha][coluna] == AGUA) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }

    // ============================
    // Exibição do tabuleiro
    // ============================
    printf("=== TABULEIRO BATALHA NAVAL COM HABILIDADES ===\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            if (tabuleiro[i][j] == AGUA) printf("~ ");       // água
            else if (tabuleiro[i][j] == NAVIO) printf("# "); // navio
            else if (tabuleiro[i][j] == HABILIDADE) printf("* "); // habilidade
        }
        printf("\n");
    }

    return 0;
}
