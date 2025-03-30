#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada das informações da primeira carta
    printf("Informe o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Informe o código da Carta 1: ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Informe a população da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Informe a área (em km²) da Carta 1: ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais) da Carta 1: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada das informações da segunda carta
    printf("Informe o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Informe o código da Carta 2: ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Informe a população da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Informe a área (em km²) da Carta 2: ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais) da Carta 2: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
