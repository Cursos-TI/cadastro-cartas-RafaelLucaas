#include <stdio.h>

int main() {
    int escolhaAtributo;

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

    printf("Escolha um atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Túristicos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - SuperPoder\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo);
    
    switch (escolhaAtributo) {
        case 1:
            printf("\n---Comparação de População--- \n");
            if (populacao_carta1 > populacao_carta2) {
                printf("População: Carta 01 Venceu! (%s: %d de Pessoas)\n", cidade_carta1, populacao_carta1);
            } else if (populacao_carta1 < populacao_carta2) {
                printf("População: Carta 02 Venceu! (%s: %d de Pessoas)\n", cidade_carta2, populacao_carta2);
            } else {
                printf("População: Empate!\n");
            }
        break;
        case 2:
            printf("\n---Comparação de Área--- \n");
            if (area_carta1 > area_carta2) {
                printf("Área: Carta 01 Venceu! (%s: %.2f km²)\n", cidade_carta1, area_carta1);
            } else if (area_carta1 < area_carta2) {
                printf("Área: Carta 02 Venceu! (%s: %.2f km²)\n", cidade_carta2, area_carta2);
            } else {
                printf("Área: Empate!");
            }
        break;
        case 3:
            printf("\n---Comparação de PIB--- \n");
            if (pib_carta1 > pib_carta2) {
                printf("PIB: Carta 01 Venceu! (%s: R$ %.2f)\n", cidade_carta1, pib_carta1);
            } else if (pib_carta1 < pib_carta2) {
                printf("PIB: Carta 02 Venceu! (%s: R$ %.2f)\n", cidade_carta2, pib_carta2);
            } else {
                printf("PIB: Empate!\n");
            }
        break;
        case 4:
            printf("\n---Comparação de Pontos Túristicos--- \n");
            if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
                printf("Pontos Túristicos: Carta 01 Venceu! (%s: %d Pontos Túristicos)\n", cidade_carta1, pontos_turisticos_carta1);
            } else if (pontos_turisticos_carta1 < pontos_turisticos_carta2) {
                printf("Pontos Túristicos: Carta 02 Venceu! (%s: %d Pontos Túristicos)\n", cidade_carta2, pontos_turisticos_carta2);
            } else {
                printf("Pontos Túristicos: Empate!\n");
            }
        break;
        case 5:
            printf("\n---Comparação de Densidade Populacional--- \n");
            if (densidade_populacional_carta1 < densidade_populacional_carta2) {
                printf("Densidade Populacional: Carta 01 Venceu! (%s: %.0f hab/km²)\n", cidade_carta1, densidade_populacional_carta1);
            } else if (densidade_populacional_carta1 > densidade_populacional_carta2) {
                printf("Densidade Populacional: Carta 02 Venceu! (%s: %.0f hab/km²)\n", cidade_carta2, densidade_populacional_carta2);
            } else {
                printf("Densidade Populacional: Empate!\n");
            }
        break;
        case 6:
            printf("\n---Comparação de PIB Per Capita--- \n");
            if (pib_per_capita_carta1 > pib_per_capita_carta2) {
                printf("PIB Per Capita: Carta 01 Venceu! (%s: R$ %.2f)\n", cidade_carta1, pib_per_capita_carta1);
            } else if (pib_per_capita_carta1 < pib_per_capita_carta2) {
                printf("PIB Per Capita: Carta 02 Venceu! (%s: R$ %.2f)\n", cidade_carta2, pib_per_capita_carta2);
            } else {
                printf("PIB Per Capita: Empate!");
            }
        break;
        case 7:    
            printf("\n---Comparação de SuperPoder--- \n");     
            if (superpoder_carta1 > superpoder_carta2) {
                printf("SuperPoder: Carta 01 Venceu! (%s: %.2f)\n", cidade_carta1, superpoder_carta1);
            } else if (superpoder_carta1 < superpoder_carta2) {
                printf("SuperPoder: Carta 02 Venceu! (%s: %.2f)\n", cidade_carta2, superpoder_carta2);
            } else {
                printf("SuperPoder: Empate!");
            }
        break;
        default:
            printf("Opção Inválida!");
        break;
    }
}