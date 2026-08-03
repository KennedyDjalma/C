#include <stdio.h>

// Criada duas constantes para definir o tamanho da matriz.
#define LINHAS 5
#define COLUNAS 5

int main() {
    // Criada uma matriz de inteiros com tamanho definido pelas constantes LINHAS e COLUNAS, evitando informar sempre o tamanho da matriz.
    int matriz[LINHAS][COLUNAS];

    // Criada uma variável para armazenar a soma dos elementos da matriz.
    int soma = 0;
    
    // Criado um loop para percorrer as linhas da matriz.
    for(int i = 0; i < LINHAS; i++) { // loop externo para percorrer as linhas da matriz.
        for(int j = 0; j < COLUNAS; j++) { // loop interno para percorrer as colunas da matriz.

            // Inicializando a matriz com valores de 0 a 24.

            soma++; // Incrementa a variável soma a cada iteração, atribuindo valores de 1 a 25 à matriz.

            matriz[i][j] = 0; // Inicializa cada elemento da matriz com 0.

            matriz[i][j] = soma; // Atribui o valor da variável soma ao elemento atual da matriz, preenchendo a matriz com valores de 1 a 25.

            printf("%d ", matriz[i][j]); // Imprime o valor do elemento atual da matriz, seguido de um espaço, para exibir a matriz na tela.
        }
        printf("\n");
    }

    return 0;
}