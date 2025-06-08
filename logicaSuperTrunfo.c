#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char país;
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Leitura dos dados da primeira carta
    printf("\n Super trunfo em C\n");
    printf("Digite o País da carta 1: \n");
    scanf("%c", &país);  
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
    printf("Digite o País da carta 2: \n");
    scanf("%c", &país);  
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
    

// Escolha dos atributos
int atributo1, atributo2;
printf("\nEscolha o primeiro atributo para comparação:\n");
printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. PIB per capita\n6. Densidade Populacional\n");
printf("Digite o número do atributo: ");
scanf("%d", &atributo1);

printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
switch (atributo1) {
    case 1:
        printf("2. Área\n3. PIB\n4. Pontos Turísticos\n5. PIB per capita\n6. Densidade Populacional\n");
        break;
    case 2:
        printf("1. População\n3. PIB\n4. Pontos Turísticos\n5. PIB per capita\n6. Densidade Populacional\n");
        break;
    case 3:
        printf("1. População\n2. Área\n4. Pontos Turísticos\n5. PIB per capita\n6. Densidade Populacional\n");
        break;
    case 4:
        printf("1. População\n2. Área\n3. PIB\n5. PIB per capita\n6. Densidade Populacional\n");
        break;
    case 5:
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n6. Densidade Populacional\n");
        break;
    case 6:
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. PIB per capita\n");
        break;
}
printf("Digite o número do atributo: ");
scanf("%d", &atributo2);

atributo2 = (atributo2 == atributo1) ? (atributo1 == 1) ? 2 : 1 : atributo2;

// Obter os valores dos atributos
float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;

switch (atributo1) {
    case 1:
        valor1Carta1 = populacao1;
        valor1Carta2 = populacao2;
        break;
    case 2:
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;
    case 3:
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;
    case 4:
        valor1Carta1 = pontosTuristicos1;
        valor1Carta2 = pontosTuristicos2;
        break;
    case 5:
        valor1Carta1 = pib_per_capita1; // Corrigido aqui
        valor1Carta2 = pib_per_capita2; // Corrigido aqui
        break;
    case 6:
        valor1Carta1 = densidade_populacional1; // Corrigido aqui
        valor1Carta2 = densidade_populacional2; // Corrigido aqui
        break;
}

switch (atributo2) {
    case 1:
        valor2Carta1 = populacao1;
        valor2Carta2 = populacao2;
        break;
    case 2:
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;
    case 3:
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;
    case 4:
        valor2Carta1 = pontosTuristicos1;
        valor2Carta2 = pontosTuristicos2;
        break;
    case 5:
        valor2Carta1 = pib_per_capita1; // Corrigido aqui
        valor2Carta2 = pib_per_capita2; // Corrigido aqui
        break;
    case 6:
        valor2Carta1 = densidade_populacional1; // Corrigido aqui
        valor2Carta2 = densidade_populacional2; // Corrigido aqui
        break;
}


int opcao;
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao);
    
//Menu interativo 
    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Comparando Área:\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);
            if (area1 > area2) {
                printf("Carta 1 venceu!\n");
            } else if (area2 > area1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
    printf("Comparando PIB:\n");
    printf("Carta 1: %.2f\n", pib1);
    printf("Carta 2: %.2f\n", pib2);
    if (pib1 > pib2) {
        printf("Carta 1 venceu!\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
case 4:
    printf("Comparando Número de pontos turísticos:\n");
    printf("Carta 1: %d\n", pontosTuristicos1);
    printf("Carta 2: %d\n", pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu!\n");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
case 5:
    printf("Comparando Densidade demográfica:\n");
    printf("Carta 1: %.2f\n", densidade_populacional1);
    printf("Carta 2: %.2f\n", densidade_populacional2);
    if (densidade_populacional1 > densidade_populacional2) {
        printf("Carta 1 venceu!\n");
    } else if (densidade_populacional2 > densidade_populacional1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
default:
    printf("Opção inválida!\n");
    break;
}
    
    // Cálculo de super poder
    float Superpoder1 = (float)populacao1 + area1 + pib1 +(float)pontosTuristicos1 + pib_per_capita1 + (1/densidade_populacional1);
    float Superpoder2 = (float)populacao2 + area2 + pib2 +(float)pontosTuristicos2 + pib_per_capita2 + (1/densidade_populacional2);

    
    // Comparação dos atributos
    printf("\nComparação dos Atributos:\n");
    // População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) + 1, populacao1 > populacao2);
    // Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) + 1, area1 > area2);
    // PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) + 1, pib1 > pib2);
    // Número de pontos turísticos
    printf("Número de pontos turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) + 1, pontosTuristicos1 > pontosTuristicos2);
    // Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) + 1, densidade_populacional1 < densidade_populacional2);
    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) + 1, pib_per_capita1 > pib_per_capita2);
    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (Superpoder1 > Superpoder2) + 1, Superpoder1 > Superpoder2);

    
    printf("\n----------------------------------------\n");
printf("             Carta 1                  \n");
printf("----------------------------------------\n");
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
printf("----------------------------------------\n");

printf("\n----------------------------------------\n");
printf("             Carta 2                  \n");
printf("----------------------------------------\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
printf("Super Poder: %.2f\n", Superpoder2);
printf("----------------------------------------\n");

    return 0;
}
