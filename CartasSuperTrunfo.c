#include <stdio.h>

int main() {
    // Atributos da Carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Atributos da Carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição da Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
