#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[5], cidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidadePop1, pibPerCapita1, superPoder1;

    // Entrada das informações da primeira carta
    printf("Informe o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    getchar(); // Consumir o caractere de nova linha remanescente após o scanf
    printf("Informe o código da Carta 1: ");
    scanf("%s", codigo1);
    
    printf("Informe o nome da cidade da Carta 1: ");
    getchar();  // Consumir o caractere de nova linha remanescente
    scanf(" %[^\n]", cidade1);
    
    printf("Informe a população da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Informe a área (em km²) da Carta 1: ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais) da Carta 1: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cálculo da Densidade Populacional e PIB per Capita
    densidadePop1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePop1);

    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePop2, pibPerCapita2, superPoder2;

    // Entrada das informações da segunda carta
    printf("\nInforme o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    getchar(); // Consumir o caractere de nova linha remanescente após o scanf
    printf("Informe o código da Carta 2: ");
    scanf("%s", codigo2);
    
    printf("Informe o nome da cidade da Carta 2: ");
    getchar();  // Consumir o caractere de nova linha remanescente
    scanf(" %[^\n]", cidade2);
    
    printf("Informe a população da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Informe a área (em km²) da Carta 2: ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais) da Carta 2: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo da Densidade Populacional e PIB per Capita
    densidadePop2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePop2);

    // Comparação dos Atributos
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePop1 < densidadePop2 ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);
    
    return 0;
}
