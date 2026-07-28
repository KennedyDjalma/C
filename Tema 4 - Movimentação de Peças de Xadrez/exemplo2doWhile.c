#include <stdio.h>
int main()
{
    int numero;
    do
    {
        printf("DIGITE UM NUMERO PAR PARA SAIR DO PROGRAMA: \n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("ESSE NUMERO %d E PAR...\n", numero);
        }
        else
        {
            printf("ESSE NUMERO %d E IMPAR...\n", numero);
        }

    } while (numero % 2 != 0);

    printf("VOCE DIGITOU UM NUMERO PAR\n");
    printf("*-*-* SAINDO DO PROGRAMA *-*-*");

}