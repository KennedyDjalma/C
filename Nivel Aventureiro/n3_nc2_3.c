#include <stdio.h>

int main() {
    float numero1 = 10.5;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int) numero1 > numero2); // colocando (int) antes de numero1 para forçar a comparação
    printf("numero1 == numero2: %d\n", (int) numero1 == numero2); // colocando (int) antes de numero1 para forçar a comparação

    return 0;
}