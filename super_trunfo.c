#include <stdio.h>
#include <string.h>

int main() {
    //  VARIÁVEIS DE CADASTRO 
    char estado1, codigo1[4], nomeCidade1[50], estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    float densidade1, pibPerCapita1, densidade2, pibPerCapita2;

    //  VARIÁVEIS DE LÓGICA DO JOGO 
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2; 
    float valor2_carta1, valor2_carta2; 
    float somaCarta1, somaCarta2;       
    char nomeAtributo1[30], nomeAtributo2[30]; 

  
    // 0. LEGENDA E INSTRUÇÕES INICIAIS
    printf("JOGO SUPER TRUNFO\n\n");
    
    printf("OBSERVAÇÕES:\n");
    printf("Cadastre as cartas conforme solicitado.\n");
    printf("O CÓDIGO é a letra do estado + numero (ex: A01).\n\n");
    
    printf("TABELA DE ESTADOS:\n");
    printf("A: Alagoas         B: Bahia\n");
    printf("C: Ceará           D: Distrito Federal\n");
    printf("E: Espírito Santo  F: São Paulo\n");
    printf("G: Goiás           H: Rio de Janeiro\n\n");



    // 1. CADASTRO
    
    //  CARTA 1 
    printf("Cadastro Carta 1\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);
    
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    //  CARTA 2
    printf("\nCadastro Carta 2\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);
    
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

 
    // 2. MENU DO PRIMEIRO ATRIBUTO
    printf("\nEscolha o PRIMEIRO atributo\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:
            valor1_carta1 = (float)populacao1;
            valor1_carta2 = (float)populacao2;
            strcpy(nomeAtributo1, "População");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            strcpy(nomeAtributo1, "Área");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;
        case 4:
            valor1_carta1 = (float)pontosTuristicos1;
            valor1_carta2 = (float)pontosTuristicos2;
            strcpy(nomeAtributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            strcpy(nomeAtributo1, "Densidade Dem.");
            break;
        default:
            printf("Opção inválida! Usando População como padrão.\n");
            valor1_carta1 = (float)populacao1;
            valor1_carta2 = (float)populacao2;
            opcao1 = 1; 
            strcpy(nomeAtributo1, "População");
    }


    // 3. MENU DINÂMICO DO SEGUNDO ATRIBUTO

    printf("\nEscolha o SEGUNDO atributo\n");
    
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turísticos\n");
    if (opcao1 != 5) printf("5. Densidade Demográfica\n");
    
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você não pode escolher o mesmo atributo! O sistema encerrará por segurança.\n");
        return 1;
    }

    switch (opcao2) {
        case 1:
            valor2_carta1 = (float)populacao1;
            valor2_carta2 = (float)populacao2;
            strcpy(nomeAtributo2, "População");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            strcpy(nomeAtributo2, "Área");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;
        case 4:
            valor2_carta1 = (float)pontosTuristicos1;
            valor2_carta2 = (float)pontosTuristicos2;
            strcpy(nomeAtributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            strcpy(nomeAtributo2, "Densidade Dem.");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }


    // 4. CÁLCULO DA SOMA E RESULTADO

    somaCarta1 = valor1_carta1 + valor2_carta1;
    somaCarta2 = valor1_carta2 + valor2_carta2;

    printf("\nRESULTADO DO DUELO: %s vs %s\n\n", nomeCidade1, nomeCidade2);
    
    printf("Atributo 1 (%s): %.2f vs %.2f\n", nomeAtributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2 (%s): %.2f vs %.2f\n", nomeAtributo2, valor2_carta1, valor2_carta2);
    
    printf("\nSOMA TOTAL CARTA 1: %.2f\n", somaCarta1);
    printf("SOMA TOTAL CARTA 2: %.2f\n", somaCarta2);

    if (somaCarta1 == somaCarta2) {
        printf("RESULTADO: EMPATE!\n");
    } else {
        printf("VENCEDOR: %s\n", (somaCarta1 > somaCarta2) ? nomeCidade1 : nomeCidade2);
    }

    return 0;
}