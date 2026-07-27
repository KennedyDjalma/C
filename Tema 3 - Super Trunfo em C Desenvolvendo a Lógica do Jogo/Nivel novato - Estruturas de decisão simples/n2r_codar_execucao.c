#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("JOGO JOKENPO");
    printf("Escolha uma opcao");
    printf("1 - PEDRA");
    printf("2 - PAPEL");
    printf("3 - TESOURA");
    printf("ESCOLHA: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: PEDRA - "); break;

    case 2:
        printf("Jogador: PAPEL - "); break;

    case 3:
        printf("Jogador: TESOURA - "); break;

    default:
    printf("OPCAO INVALIDA");
        break;
    }

    // ESCOLHA DO COMPUTADOR
        switch (escolhaComputador)
    {
    case 1:
        printf("\n Computador: PEDRA - \n"); break;

    case 2:
        printf("\n Computador: PAPEL - \n"); break;

    case 3:
        printf("\n Computador: TESOURA - \n"); break;

    }

    if (escolhaComputador == escolhaJogador) {
        printf("*-*-*-*EMPATOU*-*-*-*");
    } else if ((escolhaJogador == 1) && 
                (escolhaComputador == 3) || 
                (escolhaJogador == 2) && 
                (escolhaComputador == 1) || 
                (escolhaJogador == 3) && 
                (escolhaComputador == 2))
    {
        printf("*-*-*-*Parabens voce ganhou*-*-*-*-*");
    } else {
        printf("Voce perdeu");
    }
    
}