/*
#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
*/

/*
*-*-*-*-*-*Utilização prática do do-while

O do-while é particularmente útil em casos como menus interativos, no qual queremos que o menu seja exibido pelo menos uma vez e continue sendo exibido até que o usuário escolha uma opção de saída. Veja!

Importante: lembre-se de inserir os dados de entrada no campo input, um número por linha, e a última opção deve ser o número 3 para sair do programa.
*/

#include <stdio.h>

int main()
{
    int option;

    do
    {
        printf("Menu: \n");
        printf("1. Opcao 1 \n");
        printf("2. Opcao 2 \n");
        printf("3. Sair \n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Voce escolheu a opcao 1\n");
            break;
        case 2:
            printf("Voce escolheu a opcao 2\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção invalida!\n");
        }
    } while (option != 3);

    return 0;
}