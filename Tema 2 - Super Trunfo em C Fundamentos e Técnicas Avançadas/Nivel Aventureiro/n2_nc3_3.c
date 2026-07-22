// OPERADORES DE INCREMENTO

#include <stdio.h>

int main()
{
    /*
    OPERADORES DE INCREMENTO
    -incremento (++) - Adiciona 1 ao valor da variável.
    -pre-incremento (++variavel) - Incrementa a variável antes de usá-la.
    -pós-incremento (variavel++) - Incrementa a variável depois de usá-la.
    -decremento (--) - Subtrai 1 do valor da variável
    -pre-decremento (--variavel) - Decrementa a variável antes de usá-la.
    -pós-decremento (variavel--) - Decrementa a variável depois de usá-la.
    */

    int numero1= 1, resultado;

    printf("Antes incremento: %d \n", numero1);
    numero1++;
    printf("Depois incremento: %d \n", numero1);

    numero1--;
    printf("Depois decremento: %d \n", numero1);
}