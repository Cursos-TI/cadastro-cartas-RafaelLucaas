#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado_carta1, codigo_carta1[4], cidade_carta1[40];
    int populacao_carta1, pontos_turisticos_carta1;
    float area_carta1, pib_carta1;

    // Variáveis da Carta 2
    char estado_carta2, codigo_carta2[4], cidade_carta2[40];
    int populacao_carta2, pontos_turisticos_carta2;
    float area_carta2, pib_carta2;

    // Perguntas sobre a Carta 1
    printf("CARTA 01 - Digite a primeira letra do estado: ");
    scanf("%c", &estado_carta1);

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

    // Mostra as informações da Carta 01
    printf("CARTA 01: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: R$ %.2f \n Número de Pontos Turísticos: %d \n\n", estado_carta1, codigo_carta1, cidade_carta1, populacao_carta1, area_carta1, pib_carta1, pontos_turisticos_carta1);

    // Perguntas da Carta 02
    printf("CARTA 02 - Digite a primeira letra do estado: ");
    scanf("%c", &estado_carta2);

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

    printf("CARTA 02: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: R$ %.2f \n Número de Pontos Turísticos: %d \n\n", estado_carta2, codigo_carta2, cidade_carta2, populacao_carta2, area_carta2, pib_carta2, pontos_turisticos_carta2);
}
