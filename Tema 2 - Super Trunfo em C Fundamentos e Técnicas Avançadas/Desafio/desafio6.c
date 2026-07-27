#include <stdio.h>

int main()
{
    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", &nomeCidade1);
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da Carta 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", &nomeCidade2);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da Carta 2 (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Menu interativo para escolha dos atributos
    int opcao1, opcao2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    switch (opcao1)
    {
    case 1:
        printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
        break;
    case 2:
        printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
        break;
    case 3:
        printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
        break;
    case 4:
        printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
        break;
    case 5:
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n6 - PIB per Capita\n");
        break;
    case 6:
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }
    scanf("%d", &opcao2);

    // Função auxiliar para pegar valor do atributo
    float valor1, valor2;
    char atributo[30];

    // Comparação do primeiro atributo
    switch (opcao1)
    {
    case 1:
        valor1 = populacao1;
        valor2 = populacao2;
        sprintf(atributo, "População");
        break;
    case 2:
        valor1 = area1;
        valor2 = area2;
        sprintf(atributo, "Área");
        break;
    case 3:
        valor1 = pib1;
        valor2 = pib2;
        sprintf(atributo, "PIB");
        break;
    case 4:
        valor1 = pontosTuristicos1;
        valor2 = pontosTuristicos2;
        sprintf(atributo, "Pontos Turísticos");
        break;
    case 5:
        valor1 = densidade1;
        valor2 = densidade2;
        sprintf(atributo, "Densidade Demográfica");
        break;
    case 6:
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        sprintf(atributo, "PIB per Capita");
        break;
    }

    printf("\nComparação do primeiro atributo (%s):\n", atributo);
    printf("%s (%c): %.2f\n", nomeCidade1, estado1, valor1);
    printf("%s (%c): %.2f\n", nomeCidade2, estado2, valor2);
    printf("Resultado: %s venceu!\n",
           (opcao1 == 5) ? (valor1 < valor2 ? nomeCidade1 : (valor2 < valor1 ? nomeCidade2 : "Empate"))
                         : (valor1 > valor2 ? nomeCidade1 : (valor2 > valor1 ? nomeCidade2 : "Empate")));

    // Comparação do segundo atributo
    switch (opcao2)
    {
    case 1:
        valor1 = populacao1;
        valor2 = populacao2;
        sprintf(atributo, "População");
        break;
    case 2:
        valor1 = area1;
        valor2 = area2;
        sprintf(atributo, "Área");
        break;
    case 3:
        valor1 = pib1;
        valor2 = pib2;
        sprintf(atributo, "PIB");
        break;
    case 4:
        valor1 = pontosTuristicos1;
        valor2 = pontosTuristicos2;
        sprintf(atributo, "Pontos Turísticos");
        break;
    case 5:
        valor1 = densidade1;
        valor2 = densidade2;
        sprintf(atributo, "Densidade Demográfica");
        break;
    case 6:
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        sprintf(atributo, "PIB per Capita");
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
    }

    printf("\nComparação do segundo atributo (%s):\n", atributo);
    printf("%s (%c): %.2f\n", nomeCidade1, estado1, valor1);
    printf("%s (%c): %.2f\n", nomeCidade2, estado2, valor2);
    printf("Resultado: %s venceu!\n",
           (opcao2 == 5) ? (valor1 < valor2 ? nomeCidade1 : (valor2 < valor1 ? nomeCidade2 : "Empate"))
                         : (valor1 > valor2 ? nomeCidade1 : (valor2 > valor1 ? nomeCidade2 : "Empate")));

    // Soma dos atributos
    float soma1 = 0, soma2 = 0;
    soma1 += (opcao1 == 5 ? -densidade1 : valor1);
    soma2 += (opcao1 == 5 ? -densidade2 : valor2);
    soma1 += (opcao2 == 5 ? -densidade1 : valor1);
    soma2 += (opcao2 == 5 ? -densidade2 : valor2);

    printf("\nSoma dos atributos:\n");
    printf("%s (%c): %.2f\n", nomeCidade1, estado1, soma1);
    printf("%s (%c): %.2f\n", nomeCidade2, estado2, soma2);

    printf("Resultado final: %s\n",
           (soma1 > soma2) ? nomeCidade1 : (soma2 > soma1 ? nomeCidade2 : "Empate"));

    return 0;
}
