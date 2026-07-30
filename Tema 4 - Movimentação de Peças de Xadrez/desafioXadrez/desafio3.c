#include <stdio.h>

// -------------------------------
// Funções Recursivas
// -------------------------------

// Torre: movimento horizontal (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: movimento diagonal (Cima + Direita)
// Recursividade + loops aninhados
void moverBispo(int casas) {
    if (casas <= 0) return; // condição de parada

    // Loop externo: movimento vertical
    for (int v = 1; v <= 1; v++) {
        printf("Cima\n");

        // Loop interno: movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// Rainha: movimento horizontal (Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// -------------------------------
// Cavalo: movimento em "L"
// Usando loops aninhados + break/continue
// -------------------------------
void moverCavalo(int movimentosCima, int movimentosDireita) {
    for (int i = 1; i <= movimentosCima; i++) {
        if (i > 2) break; // garante apenas 2 movimentos para cima
        printf("Cima\n");
    }

    int j = 1;
    while (j <= movimentosDireita) {
        if (j == 0) {
            j++;
            continue; // evita valores inválidos
        }
        printf("Direita\n");
        j++;
    }
}

// -------------------------------
// Função principal
// -------------------------------
int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -------------------------------
    // Torre
    // -------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // -------------------------------
    // Bispo
    // -------------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // -------------------------------
    // Rainha
    // -------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // -------------------------------
    // Cavalo
    // -------------------------------
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(2, 1);

    return 0;
}
