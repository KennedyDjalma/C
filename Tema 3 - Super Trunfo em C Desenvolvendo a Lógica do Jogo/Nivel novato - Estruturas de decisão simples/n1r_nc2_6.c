#include <stdio.h>

int main()
{
    int numero = 4, resultado;

    resultado = numero % 2;

    printf("A variavel resultado e: %d \n", resultado);

    if (resultado == 0)
    {
        printf("O numero %d e par \n", numero);
    }
    else
    {
        printf("O numero %d e impar \n", numero);
    }
}