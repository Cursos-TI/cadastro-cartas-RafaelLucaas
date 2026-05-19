#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado_carta1, codigo_carta1[4], cidade_carta1[40];
    short int pontos_turisticos_carta1;
    unsigned long int populacao_carta1;
    float superpoder_carta1, area_carta1, pib_carta1, densidade_populacional_carta1, pib_per_capita_carta1;

    // Variáveis da Carta 2
    char estado_carta2, codigo_carta2[4], cidade_carta2[40];
    short int pontos_turisticos_carta2;
    unsigned long int populacao_carta2;
    float superpoder_carta2, area_carta2, pib_carta2, densidade_populacional_carta2, pib_per_capita_carta2;

    // Perguntas sobre a Carta 1
    printf("CARTA 01 - Digite a primeira letra do estado: ");
    scanf(" %c", &estado_carta1);

    printf("CARTA 01 - Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);

    printf("CARTA 01 - Digite o nome da cidade: ");
    scanf("%s", cidade_carta1);

    printf("CARTA 01 - Digite a população da cidade: ");
    scanf("%d", &populacao_carta1);

    printf("CARTA 01 - Digite a área da cidade em km²: ");
    scanf("%f", &area_carta1);

    printf("CARTA 01 - Digite o PIB da cidade: ");
    scanf("%f", &pib_carta1);

    printf("CARTA 01 - Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos_turisticos_carta1);

    // Perguntas da Carta 02
    printf("\n\nCARTA 02 - Digite a primeira letra do estado: ");
    scanf(" %c", &estado_carta2);

    printf("CARTA 02 - Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);

    printf("CARTA 02 - Digite o nome da cidade: ");
    scanf("%s", cidade_carta2);

    printf("CARTA 02 - Digite a população da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("CARTA 02 - Digite a área da cidade em km²: ");
    scanf("%f", &area_carta2);

    printf("CARTA 02 - Digite o PIB da cidade: ");
    scanf("%f", &pib_carta2);

    printf("CARTA 02 - Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos_turisticos_carta2);

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
    printf("CARTA 01 VENCE SE FOR 1\n");
    printf("CARTA 02 VENCE SE FOR 0\n\n"); 
    printf("População: %d\n", populacao_carta1 > populacao_carta2);
    printf("Área: %d\n", area_carta1 > area_carta2);
    printf("PIB: %d\n", pib_carta1 > pib_carta2);
    printf("Pontos Túristicos: %d\n", pontos_turisticos_carta1 > pontos_turisticos_carta2);
    printf("Densidade Populacional: %d\n", densidade_populacional_carta1 < densidade_populacional_carta2);
    printf("PIB Per Capita: %d\n", pib_per_capita_carta1 > pib_per_capita_carta2);
    printf("SuperPoder: %d\n", superpoder_carta1 > superpoder_carta2);
}