#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA];
    int target = 5;
    int found = 0;
    int soma = 1;

    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++)
    { // Loop externo para as linhas
        for (int j = 0; j < COLUNA; j++)
        { // Loop interno para as colunas
            if (matriz[i][j] = soma)
            {
                printf("Elemento %d encontrado na posicao (%d, %d)\n", target, i, j);
                soma ++;
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        if (found)
            break;
    }

    if (!found)
    {
        printf("Elemento %d não encontrado na matriz\n", target);
    }

    return 0;
}