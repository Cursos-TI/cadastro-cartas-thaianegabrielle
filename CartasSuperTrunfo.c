#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    
    // Variáveis para a Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    // Propriedades derivadas Carta 1
    float densidade1, pibPerCapita1;


    // Variáveis para a Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    // Propriedades derivadas Carta 2
    float densidade2, pibPerCapita2;

    // Legenda de Estados e Observações para o usuário 
    printf("Jogo Super Trunfo\n");
    printf("Observações: Cadastre sua carta abaixo. O Código da carta é a letra do estado seguida por dois dígitos da carta.\n");
    printf("Estados:\n");
    printf("A: Alagoas         B: Bahia\nC: Ceará           D: Distrito Federal\n");
    printf("E: Espírito Santo  F: São Paulo\nG: Goiás           H: Rio de Janeiro\n");
    printf("\n\n");

    //  Cadastro da Carta 1 
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Multiplicado para converter bilhões em reais

    //  Cadastro da Carta 2 
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //  Exibição dos Resultados 
    printf("          \n");
    printf("          CARTAS CADASTRADAS\n");
    printf("          \n");


    printf("Carta 1 - %s (%s):\n", nomeCidade1, codigo1);
    printf("População: %d | Área: %.2f km²\n", populacao1, area1);
    printf("PIB: %.2f bilhões | Pontos Turísticos: %d\n", pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s):\n", nomeCidade2, codigo2);
    printf("População: %d | Área: %.2f km²\n", populacao2, area2);
    printf("PIB: %.2f bilhões | Pontos Turísticos: %d\n", pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}