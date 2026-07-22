/*
Desafio: nível aventureiro
Calculando Densidade Populacional e PIB per Capita


No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.


O que você vai fazer


Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:

 

Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
 

Exemplo de Saída:


Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

Densidade Populacional: 5622.24 hab/km²

PIB per Capita: 44532.91 reais


Requisitos funcionais


Manter as funcionalidades do nível básico (leitura e exibição dos dados das cartas).
 
Calcular e exibir corretamente a densidade populacional e o PIB per capita para cada cidade.

Requisitos não funcionais


•    Manter os requisitos não funcionais do nível básico (usabilidade, legibilidade, corretude).

•    Eficiência: O programa deve realizar os cálculos de forma eficiente.


Simplificações para o nível intermediário


Você ainda só precisa lidar com duas cartas.
 
Continue sem usar estruturas de repetição (for, while) ou estruturas de decisão (if, else).
 

Agora você está pronto(a) para aplicar seus conhecimentos de operadores matemáticos em C! Lembre-se de documentar seu código com comentários claros e usar nomes de variáveis descritivos. No próximo nível, adicionaremos ainda mais recursos e desafios ao nosso jogo.
*/


#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB estava em bilhões

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Saída de dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Saída de dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
