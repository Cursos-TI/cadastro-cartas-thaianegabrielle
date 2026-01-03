#include <stdio.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1, superPoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    
    // Super Poder Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + ((float)1 / densidade1);

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    
    // Super Poder Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + ((float)1 / densidade2);

    // --- EXIBIÇÃO E COMPARAÇÃO ---
    printf("\n Comparação de Cartas \n");

    // Comparações diretas (Resultam em 1 para verdadeiro e 0 para falso)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}