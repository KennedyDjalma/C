#include <stdio.h>

int main() {
    //DECLARAR VARIAVEIS PRODUTO, U I ESTOQUE DOUBLE, VALOR UNITARIO, DOUBLE VALOR E U I QUANTIDADE MINIMA
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorUnitarioA = 10.50;
    float valorUnitarioB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorUnitarioA;
    double valorTotalB = estoqueB * valorUnitarioB;


    int resultadoA, resultadoB;

    // EXIBIR AS INFORMACOES DO PRODUTO
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O Produto: %s tem estoque minimo %d \n", produtoA, resultadoA);
    printf("O Produto: %s tem estoque minimo %d \n", produtoB, resultadoB);

    // COMPARACOES ENTRE OS VALORES TOTAIS DOS PRODUTOS
    printf("O produto total de A e maior que o produto total de B? %d \n", valorTotalA > valorTotalB);

    return 0;

    // if (valorTotalA > valorTotalB) {
    //     printf("O Produto: %s tem o maior valor total %.2f \n", produtoA, valorTotalA);
    // } else if (valorTotalB > valorTotalA) {
    //     printf("O Produto: %s tem o maior valor total %.2f \n", produtoB, valorTotalB);
    // } else {
    //     printf("Os produtos %s e %s tem o mesmo valor total %.2f \n", produtoA, produtoB, valorTotalA);
    // }
}