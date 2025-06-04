#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Leitura dos dados da primeira carta
    printf("Super trunfo em C\n");
    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 : \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da segunda carta
    printf("Digite o estado da carta 2 (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 : \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade_populacional1 = (float) populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float densidade_populacional2 = (float) populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo de super poder
    float Superpoder1 = (float)populacao1 + area1 + pib1 +(float)pontosTuristicos1 + pib_per_capita1 + (1/densidade_populacional1);
    float Superpoder2 = (float)populacao2 + area2 + pib2 +(float)pontosTuristicos2 + pib_per_capita2 + (1/densidade_populacional2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", Superpoder1);

    // Exibição dos dados da segunda carta

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    // Comparação das cartas
if (populacao1 > populacao2) {
    printf("carta1(%s) venceu! \n", cidade1);
    printf("Parabéns, %s! Você venceu com %d habitantes!\n", cidade1, populacao1);
} else if (populacao1 < populacao2) {
    printf("carta2(%s) venceu! \n", cidade2);
    printf("Parabéns, %s! Você venceu com %d habitantes!\n", cidade2, populacao2);
} 

    return 0;
}
