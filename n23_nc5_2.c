#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int opcao;
    int numeroSecreto, palpite;

    printf("MENU PRINCIPAL \n");
    printf("1 - INICIAR JOGO \n");
    printf("2 - VER REGRAS \n");
    printf("3 - SAIR \n");
    printf("ESCOLHA UMA OPCAO: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        /* INICIAR JOGO */
        srand(time(0)); // Vai iniciar um numero aleatorio.

        numeroSecreto = rand() % 10; // No numeroSecreto vai mostrar um numero de 0 a 9.

        printf("Digite um numero de 0 a 9: ");

        scanf("%d", &palpite);
        if (numeroSecreto == palpite) //Se o numero secreto for igual ao palpite...
        {
            printf("\n *-*-*-*VOCE ACERTOU *-*-*-* \n");
        } else {
            printf("\n *-*-*-*VOCE ERROU! *-*-*-* \n ");

            printf("O Numero Secreto e: %d \n", numeroSecreto);
        }
        
        break;
    
    case 2:
        /* VER REGRAS */
        printf("DIGITE UM NUMERO ENTRE 0 E 9, CASO O COMPUTADOR ESCOLHA O MESMO NUMERO, VOCE GANHA!");
        break;
    
    case 3:
        /* SAIR */
        printf("*-*-*-*-*-*-*-*-*-*-*-*- VOCE SAIU DO JOGO");
        break;
    
    case 4:
        /* ESCOLHA UMA OPCAO: */
        printf("ESCOLHA UMA OPCAO ACIMA");
        break;
    
    default:
        printf("OPCAO INVALIDA");
        break;
    }
}