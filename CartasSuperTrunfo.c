#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade da primeira carta (sem espacos): ");
    scanf(" %s", nomeCidade1);

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade da primeira carta (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("Digite o estado da segunda carta (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da segunda carta (sem espacos): ");
    scanf(" %s", nomeCidade2);

    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade da segunda carta (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados das duas cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}