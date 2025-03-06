#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2; // Estados das cartas (A a H)
    char codigo1[4], codigo2[4]; // Códigos das cartas (ex: A01)
    char nomeCidade1[50], nomeCidade2[50]; // Nomes das cidades
    int populacao1, populacao2; // Populações das cidades
    float area1, area2, pib1, pib2; // Áreas e PIBs das cidades
    int pontosTuristicos1, pontosTuristicos2; // Pontos turísticos das cidades

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
    scanf("%d", &pontosTuristicos1); // Lê os pontos turísticos

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
    scanf("%d", &pontosTuristicos2); // Lê os pontos turísticos

    // Exibição dos dados das duas cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1); // Exibe o estado
    printf("Codigo: %s\n", codigo1); // Exibe o código
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao1); // Exibe a população
    printf("Area: %.2f km2\n", area1); // Exibe a área
    printf("PIB: %.2f bilhoes de reais\n", pib1); // Exibe o PIB
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1); // Exibe os pontos turísticos

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2); // Exibe o estado
    printf("Codigo: %s\n", codigo2); // Exibe o código
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao2); // Exibe a população
    printf("Area: %.2f km2\n", area2); // Exibe a área
    printf("PIB: %.2f bilhoes de reais\n", pib2); // Exibe o PIB
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2); // Exibe os pontos turísticos

    return 0; // Fim do programa
}
