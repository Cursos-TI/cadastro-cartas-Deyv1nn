#include <stdio.h>

int main() {

    char estado1[10];
    char codigo1[10];
    char cidade1[20];
    unsigned long int populacao1; // agora é unsigned long int
    float area1;
    float pib1;
    int pontos1;
    float densidade1; 
    float pibcapita1;
    float superpoder1;

    char estado2[10];
    char codigo2[10];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibcapita2;
    float superpoder2;

    // início do programa
    printf("Super Trunfo - Países\n\n");

    printf("Carta 1\n\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em R$ - valor total): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    // cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibcapita1 = pib1 / populacao1;

    printf("\nCarta 2\n\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em R$ - valor total): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    // cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibcapita2 = pib2 / populacao2;

    // ===== SUPER PODER =====
    // soma dos atributos numéricos + 1/densidade
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibcapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibcapita2 + (1.0 / densidade2);


    // ===== EXIBIR RESULTADOS =====
    printf("\n===== RESULTADOS =====\n");

    // CARTA 1
    printf("\nCarta 1:\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // CARTA 2
    printf("\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    printf("Super Poder: %.2f\n", superpoder2);


    // ===== COMPARAÇÕES =====
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // densidade → menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcapita1 > pibcapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
