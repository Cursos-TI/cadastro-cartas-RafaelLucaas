#include <stdio.h>

int main() {
    int escolhaAtributo01, escolhaAtributo02;
    int resultado01, resultado02;

    // // Variáveis da Carta 1
    char pais_carta1, codigo_carta1[4], estado_carta1[40];
    short int pontos_turisticos_carta1;
    unsigned long int populacao_carta1;
    float superpoder_carta1, area_carta1, pib_carta1, densidade_populacional_carta1, pib_per_capita_carta1;

    // Variáveis da Carta 2
    char pais_carta2, codigo_carta2[4], estado_carta2[40];
    short int pontos_turisticos_carta2;
    unsigned long int populacao_carta2;
    float superpoder_carta2, area_carta2, pib_carta2, densidade_populacional_carta2, pib_per_capita_carta2;

    // Perguntas sobre a Carta 1
    printf("CARTA 01 - Digite a primeira letra do país: ");
    scanf(" %c", &pais_carta1);

    printf("CARTA 01 - Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);
    
    printf("CARTA 01 - Digite o nome do estado: ");
    scanf("%s", estado_carta1);
    printf("Nome do estado 01: %s\n", estado_carta1);

    printf("CARTA 01 - Digite a população do estado: ");
    scanf("%lu", &populacao_carta1);

    printf("CARTA 01 - Digite a área do estado em km²: ");
    scanf("%f", &area_carta1);

    printf("CARTA 01 - Digite o PIB do estado: ");
    scanf("%f", &pib_carta1);

    printf("CARTA 01 - Digite quantos pontos turisticos tem no estado: ");
    scanf("%hd", &pontos_turisticos_carta1);


    // Perguntas da Carta 02
    printf("\n\nCARTA 02 - Digite a primeira letra do país: ");
    scanf(" %c", &pais_carta2);

    printf("CARTA 02 - Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);

    printf("CARTA 02 - Digite o nome do estado: ");
    scanf("%s", estado_carta2);

    printf("CARTA 02 - Digite a população do estado: ");
    scanf("%lu", &populacao_carta2);

    printf("CARTA 02 - Digite a área do estado em km²: ");
    scanf("%f", &area_carta2);

    printf("CARTA 02 - Digite o PIB do estado: ");
    scanf("%f", &pib_carta2);

    printf("CARTA 02 - Digite quantos pontos turisticos tem no estado: ");
    scanf("%hd", &pontos_turisticos_carta2);

    densidade_populacional_carta1 = populacao_carta1 / area_carta1;
    densidade_populacional_carta2 = populacao_carta2 / area_carta2;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;
    superpoder_carta1 = populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_per_capita_carta1 + (1.0f / densidade_populacional_carta1);
    superpoder_carta2 = populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_per_capita_carta2 + (1.0f / densidade_populacional_carta2);

    printf("Escolha o primeiro atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Túristicos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - SuperPoder\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo01);

    printf("\nEscolha o segundo atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Túristicos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - SuperPoder\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo02);

    if (escolhaAtributo01 == escolhaAtributo02) {
        printf("Você escolheu o mesmo atributo!");
        return 0;
    } else {
        switch (escolhaAtributo01) {
            case 1:
                printf("\n---Comparação de População--- \n");
                if (populacao_carta1 > populacao_carta2) {
                    printf("População: Carta 01 Venceu! (%s: %d de Pessoas)\n", estado_carta1, populacao_carta1);
                } else if (populacao_carta1 < populacao_carta2) {
                    printf("População: Carta 02 Venceu! (%s: %d de Pessoas)\n", estado_carta2, populacao_carta2);
                } else {
                    printf("População: Empate!\n");
                }
                resultado01 = (populacao_carta1 > populacao_carta2) ? 1 : 0;
            break;
            case 2:
                printf("\n---Comparação de Área--- \n");
                if (area_carta1 > area_carta2) {
                    printf("Área: Carta 01 Venceu! (%s: %.2f km²)\n", estado_carta1, area_carta1);
                } else if (area_carta1 < area_carta2) {
                    printf("Área: Carta 02 Venceu! (%s: %.2f km²)\n", estado_carta2, area_carta2);
                } else {
                    printf("Área: Empate!");
                }
                resultado01 = (area_carta1 > area_carta2) ? 1 : 0;
            break;
            case 3:
                printf("\n---Comparação de PIB--- \n");
                if (pib_carta1 > pib_carta2) {
                printf("PIB: Carta 01 Venceu! (%s: R$ %.2f)\n", estado_carta1, pib_carta1);
                } else if (pib_carta1 < pib_carta2) {
                    printf("PIB: Carta 02 Venceu! (%s: R$ %.2f)\n", estado_carta2, pib_carta2);
                } else {
                    printf("PIB: Empate!\n");
                }
                resultado01 = (pib_carta1 > pib_carta2) ? 1 : 0;
            break;
            case 4:
                printf("\n---Comparação de Pontos Túristicos--- \n");
                if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
                    printf("Pontos Túristicos: Carta 01 Venceu! (%s: %lu Pontos Túristicos)\n", estado_carta1, pontos_turisticos_carta1);
                } else if (pontos_turisticos_carta1 < pontos_turisticos_carta2) {
                    printf("Pontos Túristicos: Carta 02 Venceu! (%s: %luj Pontos Túristicos)\n", estado_carta2, pontos_turisticos_carta2);
                } else {
                    printf("Pontos Túristicos: Empate!\n");
                }
                resultado01 = (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : 0;
            break;
            case 5:
                printf("\n---Comparação de Densidade Populacional--- \n");
                if (densidade_populacional_carta1 < densidade_populacional_carta2) {
                    printf("Densidade Populacional: Carta 01 Venceu! (%s: %.0f hab/km²)\n", estado_carta1, densidade_populacional_carta1);
                } else if (densidade_populacional_carta1 > densidade_populacional_carta2) {
                    printf("Densidade Populacional: Carta 02 Venceu! (%s: %.0f hab/km²)\n", estado_carta2, densidade_populacional_carta2);
                } else {
                    printf("Densidade Populacional: Empate!\n");
                }
                resultado01 = (densidade_populacional_carta1 < densidade_populacional_carta2) ? 1 : 0;
            break;
            case 6:
                printf("\n---Comparação de PIB Per Capita--- \n");
                if (pib_per_capita_carta1 > pib_per_capita_carta2) {
                    printf("PIB Per Capita: Carta 01 Venceu! (%s: R$ %.2f)\n", estado_carta1, pib_per_capita_carta1);
                } else if (pib_per_capita_carta1 < pib_per_capita_carta2) {
                    printf("PIB Per Capita: Carta 02 Venceu! (%s: R$ %.2f)\n", estado_carta2, pib_per_capita_carta2);
                } else {
                    printf("PIB Per Capita: Empate!");
                }
                resultado01 = (pib_per_capita_carta1 > pib_per_capita_carta2) ? 1 : 0;
            break;
            case 7:    
                printf("\n---Comparação de SuperPoder--- \n");     
                if (superpoder_carta1 > superpoder_carta2) {
                    printf("SuperPoder: Carta 01 Venceu! (%s: %.2f)\n", estado_carta1, superpoder_carta1);
                } else if (superpoder_carta1 < superpoder_carta2) {
                    printf("SuperPoder: Carta 02 Venceu! (%s: %.2f)\n", estado_carta2, superpoder_carta2);
                } else {
                    printf("SuperPoder: Empate!");
                }
                resultado01 = (superpoder_carta1 > superpoder_carta2) ? 1 : 0;
            break;
            default:
                printf("Opção Inválida!");
            break;
        }

        switch (escolhaAtributo02) {
            case 1:
                printf("---Comparação de População--- \n");
                if (populacao_carta1 > populacao_carta2) {
                    printf("População: Carta 01 Venceu! (%s: %d de Pessoas)\n", estado_carta1, populacao_carta1);
                } else if (populacao_carta1 < populacao_carta2) {
                    printf("População: Carta 02 Venceu! (%s: %d de Pessoas)\n", estado_carta2, populacao_carta2);
                } else {
                    printf("População: Empate!\n");
                }
                resultado02 = (populacao_carta1 > populacao_carta2) ? 1 : 0;
            break;
            case 2:
                printf("---Comparação de Área--- \n");
                if (area_carta1 > area_carta2) {
                    printf("Área: Carta 01 Venceu! (%s: %.2f km²)\n", estado_carta1, area_carta1);
                } else if (area_carta1 < area_carta2) {
                    printf("Área: Carta 02 Venceu! (%s: %.2f km²)\n", estado_carta2, area_carta2);
                } else {
                    printf("Área: Empate!");
                }
                resultado02 = (area_carta1 > area_carta2) ? 1 : 0;
            break;
            case 3:
                printf("---Comparação de PIB--- \n");
                if (pib_carta1 > pib_carta2) {
                printf("PIB: Carta 01 Venceu! (%s: R$ %.2f)\n", estado_carta1, pib_carta1);
                } else if (pib_carta1 < pib_carta2) {
                    printf("PIB: Carta 02 Venceu! (%s: R$ %.2f)\n", estado_carta2, pib_carta2);
                } else {
                    printf("PIB: Empate!\n");
                }
                resultado02 = (pib_carta1 > pib_carta2) ? 1 : 0;
            break;
            case 4:
                printf("---Comparação de Pontos Túristicos--- \n");
                if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
                    printf("Pontos Túristicos: Carta 01 Venceu! (%s: %lu Pontos Túristicos)\n", estado_carta1, pontos_turisticos_carta1);
                } else if (pontos_turisticos_carta1 < pontos_turisticos_carta2) {
                    printf("Pontos Túristicos: Carta 02 Venceu! (%s: %luj Pontos Túristicos)\n", estado_carta2, pontos_turisticos_carta2);
                } else {
                    printf("Pontos Túristicos: Empate!\n");
                }
                resultado02 = (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : 0;
            break;
            case 5:
                printf("---Comparação de Densidade Populacional--- \n");
                if (densidade_populacional_carta1 < densidade_populacional_carta2) {
                    printf("Densidade Populacional: Carta 01 Venceu! (%s: %.0f hab/km²)\n", estado_carta1, densidade_populacional_carta1);
                } else if (densidade_populacional_carta1 > densidade_populacional_carta2) {
                    printf("Densidade Populacional: Carta 02 Venceu! (%s: %.0f hab/km²)\n", estado_carta2, densidade_populacional_carta2);
                } else {
                    printf("Densidade Populacional: Empate!\n");
                }
                resultado02 = (densidade_populacional_carta1 < densidade_populacional_carta2) ? 1 : 0;
            break;
            case 6:
                printf("---Comparação de PIB Per Capita--- \n");
                if (pib_per_capita_carta1 > pib_per_capita_carta2) {
                    printf("PIB Per Capita: Carta 01 Venceu! (%s: R$ %.2f)\n", estado_carta1, pib_per_capita_carta1);
                } else if (pib_per_capita_carta1 < pib_per_capita_carta2) {
                    printf("PIB Per Capita: Carta 02 Venceu! (%s: R$ %.2f)\n", estado_carta2, pib_per_capita_carta2);
                } else {
                    printf("PIB Per Capita: Empate!");
                }
                resultado02 = (pib_per_capita_carta1 > pib_per_capita_carta2) ? 1 : 0;
            break;
            case 7:    
                printf("---Comparação de SuperPoder--- \n");     
                if (superpoder_carta1 > superpoder_carta2) {
                    printf("SuperPoder: Carta 01 Venceu! (%s: %.2f)\n", estado_carta1, superpoder_carta1);
                } else if (superpoder_carta1 < superpoder_carta2) {
                    printf("SuperPoder: Carta 02 Venceu! (%s: %.2f)\n", estado_carta2, superpoder_carta2);
                } else {
                    printf("SuperPoder: Empate!");
                }
                resultado02 = (superpoder_carta1 > superpoder_carta2) ? 1 : 0;
            break;
            default:
                printf("Opção Inválida!");
            break;
        }
    }

    if (resultado01 && resultado02) {
        printf("\nParabéns, você ganhou!");
    } else if (resultado01 != resultado02) {
        printf("\nEmpatou!");
    } else {
        printf("\nVocê perdeu!");
    }
}