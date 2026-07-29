#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -------------------------------
    // Torre: movimento horizontal (Direita) usando FOR
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Bispo: movimento diagonal (Cima + Direita) usando WHILE
    // -------------------------------
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // -------------------------------
    // Rainha: movimento horizontal (Esquerda) usando DO-WHILE
    // -------------------------------
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
