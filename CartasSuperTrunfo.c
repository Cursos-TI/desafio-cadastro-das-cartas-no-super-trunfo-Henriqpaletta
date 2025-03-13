#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2; 
    char codigo1[4], codigo2[4]; 
    char nomeCidade1[50], nomeCidade2[50]; 
    int populacao1, populacao2; 
    float area1, area2, pib1, pib2; 
    int pontosTuristicos1, pontosTuristicos2; 
    float densidadePopulacional1, densidadePopulacional2; 
    float pibPerCapita1, pibPerCapita2; 
    
    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta (uma letra de A a H): ");
    scanf(" %c", &estado1); // Lê o estado

    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%3s", codigo1); // Lê o código

    printf("Digite o nome da cidade da primeira carta (sem espacos): ");
    scanf(" %s", nomeCidade1); // Lê o nome da cidade

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao1); // Lê a população

    printf("Digite a area da cidade da primeira carta (em km2): ");
    scanf("%f", &area1); // Lê a área

    printf("Digite o PIB da primeira carta (em bilhoes de reais): ");
    scanf("%f", &pib1); // Lê o PIB

    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos
    
    // Impressão para verificação
    printf("Verificação: PIB1 em bilhões de reais: %.2f\n", pib1);
    
    // Calculos da primeira carta
    densidadePopulacional1 = populacao1 / area1; // Calcula a densidade populacional
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Calcula o PIB per capita

    // Impressão para verificação
    printf("Verificação: PIB per Capita1 em reais: %.2f\n", pibPerCapita1);

    // Entrada de dados para a segunda carta
    printf("Digite o estado da segunda carta (uma letra de A a H): ");
    scanf(" %c", &estado2); // Lê o estado

    printf("Digite o codigo da segunda carta (ex: A01): ");
    scanf("%3s", codigo2); // Lê o código

    printf("Digite o nome da cidade da segunda carta (sem espacos): ");
    scanf(" %s", nomeCidade2); // Lê o nome da cidade

    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao2); // Lê a população

    printf("Digite a area da cidade da segunda carta (em km2): ");
    scanf("%f", &area2); // Lê a área

    printf("Digite o PIB da segunda carta (em bilhoes de reais): ");
    scanf("%f", &pib2); // Lê o PIB

    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2); // Lê o número de pontos turísticos
    
    // Impressão para verificação
    printf("Verificação: PIB2 em bilhões de reais: %.2f\n", pib2);

    // Calculos da segunda carta
    densidadePopulacional2 = populacao2 / area2; // Calcula a densidade populacional
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita

    // Impressão para verificação
    printf("Verificação: PIB per Capita2 em reais: %.2f\n", pibPerCapita2);

    // Exibição dos dados das duas cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1); // Exibe o estado
    printf("Codigo: %s\n", codigo1); // Exibe o código
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao1); // Exibe a população
    printf("Area: %.2f km2\n", area1); // Exibe a área
    printf("PIB: %.2f bilhoes de reais\n", pib1); // Exibe o PIB
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1); // Exibe a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Exibe o PIB per capita
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2); // Exibe o estado
    printf("Codigo: %s\n", codigo2); // Exibe o código
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao2); // Exibe a população
    printf("Area: %.2f km2\n", area2); // Exibe a área
    printf("PIB: %.2f bilhoes de reais\n", pib2); // Exibe o PIB
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2); // Exibe a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Exibe o PIB per capita

    return 0; // Indica que o programa foi executado com sucesso
}
