#include <stdio.h>
 
int main() {
    int vetor[5]; // Declaração de um vetor de 5 inteiros
 
    // Inicialização do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
    }
 
    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]); //pode simplificar colocando o print logo abaixo do vetor, descartando o segundo 'for'
    }
 
    return 0;
}