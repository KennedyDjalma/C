#include <stdio.h>

int main()
{
    int idade = 25;
    int qualidade = 1;
    float altura = 1.75;
    char opcao = 'S';
    double peso = 90.3;
    char letra = 'A';
    char nome[20] = "Kennedy";
/*
    //Mostra na tela os valores das variáveis
    printf("A idade do %s é %d anos. \n", nome, idade);
    printf("A altura é: %e \n", altura);
    printf("A opção é: %d \n", opcao);

*/

    //Mostra na tela os valores das variáveis INFORMADOS
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d \n", idade);
}

/*
A seguir, você tem uma lista dos principais especificadores utilizados:

printf(“%formato1 %formato2”, variável1, variável2);

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/