#include <stdio.h>

int main()
{
    /*
    ATRIBUIÇÃO SIMPLES (=)
    ATRIBUIÇÃO COM SOMA (+=)
    ATRIBUIÇÃO COM SUBTRAÇÃO (-=)
    ATRIBUIÇÃO COM MULTIPLICAÇÃO (*=)
    ATRIBUIÇÃO COM DIVISÃO (/=)
    */
    int numero1, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d \n", resultado);
    // Resultado: 10

    resultado += 20;
    printf("Resultado: %d \n", resultado);
    // Resultado: 30

    resultado -= 5;
    printf("Resultado: %d \n", resultado);
    // Resultado: 25

    resultado *= 2;
    printf("Resultado: %d \n", resultado);
    // Resultado: 50

    resultado /= 3;
    printf("Resultado: %d \n", resultado);
    // Resultado: 16
}