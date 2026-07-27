//Integração de estruturas de decisão
#include <stdio.h>
int main(){
    
    int opcao;
    float nota1, nota2, media;

    int printf(const char *__restrict__ _Format,...);
    printf("1 - Calcular media \n");
    printf("2 - Determinar status \n ");
    printf("3 - sair \n ");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Calcular a media");

        //ENTRADA DE NOTAS
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        // TESTAR SE A NOTA É >=0 E <=10
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
        {
            printf("\n Entrada correta \n");
            media = (nota1 + nota2) / 2;
            printf("A media e %.2f \n", media);

        } else {
            printf("Entrada invalida");
        }
        
        break;
    
    case 2:
        printf("Determinar status");
        break;
    
    case 3:
        printf("Sair do programa");
        break;
    
    default:
    printf("*-*-*-*-*-*-*-*Opcao invalida");
        break;
    }

    return 0;
}