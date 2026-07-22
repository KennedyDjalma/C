//Operadores matemáticos

#include <stdio.h>

int main()
{
    //criando variaveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    //entrada de dados (obtendo os valores)
    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);

    //Calculando as operações matemáticas
    // Operação Soma
    soma = numero1 + numero2;

    // Operação Subtração
    subtracao = numero1 - numero2;

    // Operação Multiplicação
    multiplicacao = numero1 * numero2;

    // Operação Divisão
    divisao = numero1 / numero2;

    //
    printf("A Soma e: %d\n", soma);
    printf("A Subtracao e: %d\n", subtracao);
    printf("A Multiplicacao e: %d\n", multiplicacao);
    printf("A Divisao e: %d\n", divisao);
}