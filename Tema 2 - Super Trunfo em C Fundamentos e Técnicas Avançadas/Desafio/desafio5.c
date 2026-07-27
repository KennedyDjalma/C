#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
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

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Comparação usando switch
    switch(opcao) {
        case 1: // População
            printf("\nComparação: População\n");
            printf("%s (%c): %lu\n", nomeCidade1, estado1, populacao1);
            printf("%s (%c): %lu\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nComparação: Área\n");
            printf("%s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("%s (%c): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparação: PIB\n");
            printf("%s (%c): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("%s (%c): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\nComparação: Pontos Turísticos\n");
            printf("%s (%c): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("%s (%c): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (regra invertida)
            printf("\nComparação: Densidade Demográfica\n");
            printf("%s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("%s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("\nComparação: PIB per Capita\n");
            printf("%s (%c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("%s (%c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
    }

    return 0;
}
