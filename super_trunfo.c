#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    // char estado_carta1, codigo_carta1[4], cidade_carta1[40];
    // short int pontos_turisticos_carta1;
    // unsigned long int populacao_carta1;
    // float superpoder_carta1, area_carta1, pib_carta1, densidade_populacional_carta1, pib_per_capita_carta1;

    // // Variáveis da Carta 2
    // char estado_carta2, codigo_carta2[4], cidade_carta2[40];
    // short int pontos_turisticos_carta2;
    // unsigned long int populacao_carta2;
    // float superpoder_carta2, area_carta2, pib_carta2, densidade_populacional_carta2, pib_per_capita_carta2;

    char estado_carta1 = 'A', codigo_carta1[4] = "P01", cidade_carta1[40] = "Recife";
    short int pontos_turisticos_carta1 = 30;
    unsigned long int populacao_carta1 = 1588376;
    float superpoder_carta1 = 66352934912.00, area_carta1 = 218.84, pib_carta1 = 66351304704, densidade_populacional_carta1 = 7258.16, pib_per_capita_carta1 = 41773.05;

    // Variáveis da Carta 2
    char estado_carta2 = 'C', codigo_carta2[4] = "C02", cidade_carta2[40] = "Fortaleza";
    short int pontos_turisticos_carta2 = 25;
    unsigned long int populacao_carta2 = 2578483;
    float superpoder_carta2 = 86942441472.00, area_carta2 = 312.35, pib_carta2 = 86939828224, densidade_populacional_carta2 = 8255.11, pib_per_capita_carta2 = 33717.43;

    // // Perguntas sobre a Carta 1
    // printf("CARTA 01 - Digite a primeira letra do estado: ");
    // scanf(" %c", &estado_carta1);

    // printf("CARTA 01 - Digite o codigo da carta: ");
    // scanf("%s", codigo_carta1);

    // printf("CARTA 01 - Digite o nome da cidade: ");
    // scanf("%s", cidade_carta1);

    // printf("CARTA 01 - Digite a população da cidade: ");
    // scanf("%d", &populacao_carta1);

    // printf("CARTA 01 - Digite a área da cidade em km²: ");
    // scanf("%f", &area_carta1);

    // printf("CARTA 01 - Digite o PIB da cidade: ");
    // scanf("%f", &pib_carta1);

    // printf("CARTA 01 - Digite quantos pontos turisticos tem na cidade: ");
    // scanf("%d", &pontos_turisticos_carta1);

    // // Perguntas da Carta 02
    // printf("\n\nCARTA 02 - Digite a primeira letra do estado: ");
    // scanf(" %c", &estado_carta2);

    // printf("CARTA 02 - Digite o codigo da carta: ");
    // scanf("%s", codigo_carta2);

    // printf("CARTA 02 - Digite o nome da cidade: ");
    // scanf("%s", cidade_carta2);

    // printf("CARTA 02 - Digite a população da cidade: ");
    // scanf("%d", &populacao_carta2);

    // printf("CARTA 02 - Digite a área da cidade em km²: ");
    // scanf("%f", &area_carta2);

    // printf("CARTA 02 - Digite o PIB da cidade: ");
    // scanf("%f", &pib_carta2);

    // printf("CARTA 02 - Digite quantos pontos turisticos tem na cidade: ");
    // scanf("%d", &pontos_turisticos_carta2);

    densidade_populacional_carta1 = populacao_carta1 / area_carta1;
    densidade_populacional_carta2 = populacao_carta2 / area_carta2;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;

    superpoder_carta1 = populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_per_capita_carta1 + (1.0f / densidade_populacional_carta1);
    superpoder_carta2 = populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_per_capita_carta2 + (1.0f / densidade_populacional_carta2);
    
    // Mostra as informações da Carta 01
    printf("CARTA 01: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: R$ %.2f \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km²\n PIB Per Capita: R$ %.2f\n SuperPoder: %.0f\n\n", estado_carta1, codigo_carta1, cidade_carta1, populacao_carta1, area_carta1, pib_carta1, pontos_turisticos_carta1, densidade_populacional_carta1, pib_per_capita_carta1, superpoder_carta1);

    // Mostra as informações da Carta 02
    printf("CARTA 02: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: R$ %.2f \n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB Per Capita: R$ %.2f\n SuperPoder: %.0f\n\n", estado_carta2, codigo_carta2, cidade_carta2, populacao_carta2, area_carta2, pib_carta2, pontos_turisticos_carta2, densidade_populacional_carta2, pib_per_capita_carta2, superpoder_carta2);


    printf("\n---Comparação de Cartas--- \n");
    
    if (populacao_carta1 > populacao_carta2) {
        printf("População: Carta 01 Venceu! (%s: %d de Pessoas)\n", cidade_carta1, populacao_carta1);
    } else {
        printf("População: Carta 02 Venceu! (%s: %d de Pessoas)\n", cidade_carta2, populacao_carta2);
    }

    if (area_carta1 > area_carta2) {
        printf("Área: Carta 01 Venceu! (%s: %.2f km²)\n", cidade_carta1, area_carta1);
    } else {
        printf("Área: Carta 02 Venceu! (%s: %.2f km²)\n", cidade_carta2, area_carta2);
    }

    if (pib_carta1 > pib_carta2) {
        printf("PIB: Carta 01 Venceu! (%s: R$ %.2f)\n", cidade_carta1, pib_carta1);
    } else {
        printf("PIB: Carta 02 Venceu! (%s: R$ %.2f)\n", cidade_carta2, pib_carta2);
    }

    if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
        printf("Pontos Túristicos: Carta 01 Venceu! (%s: %d Pontos Túristicos)\n", cidade_carta1, pontos_turisticos_carta1);
    } else {
        printf("Pontos Túristicos: Carta 02 Venceu! (%s: %d Pontos Túristicos)\n", cidade_carta2, pontos_turisticos_carta2);
    }

    if (densidade_populacional_carta1 < densidade_populacional_carta2) {
        printf("Densidade Populacional: Carta 01 Venceu! (%s: %.0f hab/km²)\n", cidade_carta1, densidade_populacional_carta1);
    } else {
        printf("Densidade Populacional: Carta 02 Venceu! (%s: %.0f hab/km²)\n", cidade_carta2, densidade_populacional_carta2);
    }

    if (pib_per_capita_carta1 > pib_per_capita_carta2) {
        printf("PIB Per Capita: Carta 01 Venceu! (%s: R$ %.2f)\n", cidade_carta1, pib_per_capita_carta1);
    } else {
        printf("PIB Per Capita: Carta 02 Venceu! (%s: R$ %.2f)\n", cidade_carta2, pib_per_capita_carta2);
    }

    if (superpoder_carta1 > superpoder_carta2) {
        printf("SuperPoder: Carta 01 Venceu! (%s: %.2f)\n", cidade_carta1, superpoder_carta1);
    } else {
        printf("SuperPoder: Carta 02 Venceu! (%s: %.2f)\n", cidade_carta2, superpoder_carta2);
    }
}