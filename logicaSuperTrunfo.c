#include <stdio.h>

int main() {
    // Definição das variáveis das cartas

    // Definição das variáveis da carta 1
    char estado1;
    char cidade1[50];
    char codigo1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    float superPoder1;

    // Definição das variáveis da carta 2
    char estado2;
    char cidade2[50];
    char codigo2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;
    float superPoder2;

    // Cadastro das Cartas
    // Leitura dos dados da carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a população da carta 1: ");
    scanf("%ld", &populacao1);

    printf("Digite a area da cidade (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo de valores e atribuição dos resultados às variáveis
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cálculo do super poder da carta 1
    superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1/densidade_pop1);

    // Leitura dos dados da carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a população da carta 2: ");
    scanf("%ld", &populacao2);

    printf("Digite a area da cidade (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de valores e atribuição dos resultados às variáveis
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Cálculo do super poder da carta 2
    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade_pop2);

    // Exibição dos Dados das Cartas
    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %ld \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("Densidade populacional: %.2f \n", densidade_pop1);
    printf("Pib per capita: R$%.2f \n", pib_per_capita1);
    printf("Super poder: %f\n", superPoder1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %ld \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f \n", densidade_pop2);
    printf("Pib per capita: R$%.2f \n", pib_per_capita2);
    printf("Super poder: %f\n", superPoder2);

    // Comparação de atributos das cartas
    printf("\n*** Comparação de cartas ***\n");

    int atributo1;
    int atributo2;

    // Menu de seleção
    printf("Selecione uma das opções abaixo:\n");
    printf("1. Comparar população\n");
    printf("2. Comparar área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar número de pontos turísticos\n");
    printf("5. Comparar densidade populacional\n");
    printf("6. Comparar PIB per capita\n");
    printf("7. Comparar super poder\n");
    
    scanf("%d", &atributo1);

    printf("Agora, selecione uma segunda opção");

    // Menu dinamico
    switch (atributo1){
        case 1:
            printf("Selecione uma das opções abaixo:\n");
            printf("2. Comparar área\n");
            printf("3. Comparar PIB\n");
            printf("4. Comparar número de pontos turísticos\n");
            printf("5. Comparar densidade populacional\n");
            printf("6. Comparar PIB per capita\n");
            printf("7. Comparar super poder\n");
            break;
        case 2:
            printf("Selecione uma das opções abaixo:\n");
            printf("1. Comparar população\n");
            printf("3. Comparar PIB\n");
            printf("4. Comparar número de pontos turísticos\n");
            printf("5. Comparar densidade populacional\n");
            printf("6. Comparar PIB per capita\n");
            printf("7. Comparar super poder\n");
            break;
        case 3:
            printf("Selecione uma das opções abaixo:\n");
            printf("1. Comparar população\n");
            printf("2. Comparar área\n");
            printf("4. Comparar número de pontos turísticos\n");
            printf("5. Comparar densidade populacional\n");
            printf("6. Comparar PIB per capita\n");
            printf("7. Comparar super poder\n");
            break;
        case 4:
            printf("Selecione uma das opções abaixo:\n");
            printf("1. Comparar população\n");
            printf("2. Comparar área\n");
            printf("3. Comparar PIB\n");
            printf("5. Comparar densidade populacional\n");
            printf("6. Comparar PIB per capita\n");
            printf("7. Comparar super poder\n");
            break;
        case 5:
            printf("Selecione uma das opções abaixo:\n");
            printf("1. Comparar população\n");
            printf("2. Comparar área\n");
            printf("3. Comparar PIB\n");
            printf("4. Comparar número de pontos turísticos\n");
            printf("6. Comparar PIB per capita\n");
            printf("7. Comparar super poder\n");
            break;
        case 6:
            printf("Selecione uma das opções abaixo:\n");
            printf("1. Comparar população\n");
            printf("2. Comparar área\n");
            printf("3. Comparar PIB\n");
            printf("4. Comparar número de pontos turísticos\n");
            printf("5. Comparar densidade populacional\n");
            printf("7. Comparar super poder\n");
            break;
        case 7:
            printf("Selecione uma das opções abaixo:\n");
            printf("1. Comparar população\n");
            printf("2. Comparar área\n");
            printf("3. Comparar PIB\n");
            printf("4. Comparar número de pontos turísticos\n");
            printf("5. Comparar densidade populacional\n");
            printf("6. Comparar PIB per capita\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    scanf("%d", &atributo2);
    
    if(atributo1 == atributo2) {
        printf("Atributos não podem ser iguais");
        return 0;
    }
    
    // Inicialização das variaveis de soma de atributo das cartas
    int soma_atributos_carta1 = 0;    
    int soma_atributos_carta2 = 0;

    // Switch de comparação de atributos das cartas
    switch(atributo1){
        case 1:
            printf("\nComparação de população:\n");
            printf("Carta 1 - %s(%c): %ld\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s(%c): %ld\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("Cidade 1 tem maior população.\n");
                printf("Carta 1 vence!\n");
            } else if (populacao1 < populacao2) {
                printf("Cidade 2 tem maior população.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += populacao1;
            soma_atributos_carta2 += populacao2;

            break;
        case 2:
            printf("\nComparação de área:\n");
            printf("Carta 1 - %s(%c): %f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s(%c): %f\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("Cidade 1 tem maior área.\n");
                printf("Carta 1 vence!\n");
            } else if (area1 < area2){
                printf("Cidade 2 tem maior área.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += area1;
            soma_atributos_carta2 += area2;

            break;
        case 3:
            printf("\nComparação de PIB:\n");
            printf("Carta 1 - %s(%c): %f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s(%c): %f\n", cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("Cidade 1 tem maior PIB.\n");
                printf("Carta 1 vence!\n");
            } else if (pib1 < pib2) {
                printf("Cidade 2 tem maior PIB.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += pib1;
            soma_atributos_carta2 += pib2;

            break;
        case 4:
            printf("\nComparação de número de pontos turísticos:\n");
            printf("Carta 1 - %s(%c): %d\n", cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s(%c): %d\n", cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Cidade 1 tem maior número de pontos turísticos.\n");
                printf("Carta 1 vence!\n");
            } else if (pontos_turisticos1 < pontos_turisticos2){
                printf("Cidade 2 tem maior número de pontos turísticos.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += pontos_turisticos1;
            soma_atributos_carta2 += pontos_turisticos2;

            break;
        case 5:
            printf("\nComparação de densidade populacional:\n");
            printf("Carta 1 - %s(%c): %.2f\n", cidade1, estado1, densidade_pop1);
            printf("Carta 2 - %s(%c): %.2f\n", cidade2, estado2, densidade_pop2);

            if (densidade_pop1 < densidade_pop2) {
                printf("Cidade 1 tem menor densidade populacional.\n");
                printf("Carta 1 vence!\n");
            } else if(densidade_pop1 > densidade_pop2){
                printf("Cidade 2 tem menor densidade populacional.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += densidade_pop1;
            soma_atributos_carta2 += densidade_pop2;

            break;
        case 6:
            printf("\nComparação de PIB per capita:\n");
            printf("Carta 1 - %s(%c): %.2f\n", cidade1, estado1, pib_per_capita1);
            printf("Carta 2 - %s(%c): %.2f\n", cidade2, estado2, pib_per_capita2);

            if (pib_per_capita1 > pib_per_capita2) {
                printf("Cidade 1 tem maior PIB per capita.\n");
                printf("Carta 1 vence!\n");
            } else if(pib_per_capita1 < pib_per_capita2) {
                printf("Cidade 2 tem maior PIB per capita.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += pib_per_capita1;
            soma_atributos_carta2 += pib_per_capita2;

            break;
        case 7:
            printf("\nComparação de super poder:\n");
            printf("Carta 1 - %s(%c): %f\n", cidade1, estado1, superPoder1);
            printf("Carta 2 - %s(%c): %f\n", cidade2, estado2, superPoder2);

            if (superPoder1 > superPoder2) {
                printf("Cidade 1 tem maior super poder.\n");
                printf("Carta 1 vence!\n");
            } else if(superPoder1 < superPoder2) {
                printf("Cidade 2 tem maior super poder.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += superPoder1;
            soma_atributos_carta2 += superPoder2;

            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    switch(atributo2){
        case 1:
            printf("\nComparação de população:\n");
            printf("Carta 1 - %s(%c): %ld\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s(%c): %ld\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("Cidade 1 tem maior população.\n");
                printf("Carta 1 vence!\n");
            } else if (populacao1 < populacao2) {
                printf("Cidade 2 tem maior população.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += populacao1;
            soma_atributos_carta2 += populacao2;

            break;
        case 2:
            printf("\nComparação de área:\n");
            printf("Carta 1 - %s(%c): %f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s(%c): %f\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("Cidade 1 tem maior área.\n");
                printf("Carta 1 vence!\n");
            } else if (area1 < area2){
                printf("Cidade 2 tem maior área.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += area1;
            soma_atributos_carta2 += area2;

            break;
        case 3:
            printf("\nComparação de PIB:\n");
            printf("Carta 1 - %s(%c): %f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s(%c): %f\n", cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("Cidade 1 tem maior PIB.\n");
                printf("Carta 1 vence!\n");
            } else if (pib1 < pib2) {
                printf("Cidade 2 tem maior PIB.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += pib1;
            soma_atributos_carta2 += pib2;

            break;
        case 4:
            printf("\nComparação de número de pontos turísticos:\n");
            printf("Carta 1 - %s(%c): %d\n", cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s(%c): %d\n", cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Cidade 1 tem maior número de pontos turísticos.\n");
                printf("Carta 1 vence!\n");
            } else if (pontos_turisticos1 < pontos_turisticos2){
                printf("Cidade 2 tem maior número de pontos turísticos.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += pontos_turisticos1;
            soma_atributos_carta2 += pontos_turisticos2;

            break;
        case 5:
            printf("\nComparação de densidade populacional:\n");
            printf("Carta 1 - %s(%c): %.2f\n", cidade1, estado1, densidade_pop1);
            printf("Carta 2 - %s(%c): %.2f\n", cidade2, estado2, densidade_pop2);

            if (densidade_pop1 < densidade_pop2) {
                printf("Cidade 1 tem menor densidade populacional.\n");
                printf("Carta 1 vence!\n");
            } else if(densidade_pop1 > densidade_pop2){
                printf("Cidade 2 tem menor densidade populacional.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += densidade_pop1;
            soma_atributos_carta2 += densidade_pop2;

            break;
        case 6:
            printf("\nComparação de PIB per capita:\n");
            printf("Carta 1 - %s(%c): %.2f\n", cidade1, estado1, pib_per_capita1);
            printf("Carta 2 - %s(%c): %.2f\n", cidade2, estado2, pib_per_capita2);

            if (pib_per_capita1 > pib_per_capita2) {
                printf("Cidade 1 tem maior PIB per capita.\n");
                printf("Carta 1 vence!\n");
            } else if(pib_per_capita1 < pib_per_capita2) {
                printf("Cidade 2 tem maior PIB per capita.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += pib_per_capita1;
            soma_atributos_carta2 += pib_per_capita2;

            break;
        case 7:
            printf("\nComparação de super poder:\n");
            printf("Carta 1 - %s(%c): %f\n", cidade1, estado1, superPoder1);
            printf("Carta 2 - %s(%c): %f\n", cidade2, estado2, superPoder2);

            if (superPoder1 > superPoder2) {
                printf("Cidade 1 tem maior super poder.\n");
                printf("Carta 1 vence!\n");
            } else if(superPoder1 < superPoder2) {
                printf("Cidade 2 tem maior super poder.\n");
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }

            soma_atributos_carta1 += superPoder1;
            soma_atributos_carta2 += superPoder2;

            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    // Resultado do jogo
    printf("\n*** Resultado do jogo ***\n");

    if(soma_atributos_carta1 == soma_atributos_carta2){
        printf("Soma de atributos da carta 1: %d\n", soma_atributos_carta1);
        printf("Soma de atributos da carta 2: %d\n", soma_atributos_carta2);

        printf("Empate!\n");
    } else if(soma_atributos_carta1 > soma_atributos_carta2){
        printf("Soma de atributos da carta 1: %d\n", soma_atributos_carta1);
        printf("Soma de atributos da carta 2: %d\n", soma_atributos_carta2);

        printf("Carta 1 vence!\n");
    } else {
        printf("Soma de atributos da carta 1: %d\n", soma_atributos_carta1);
        printf("Soma de atributos da carta 2: %d\n", soma_atributos_carta2);

        printf("Carta 2 vence!\n");
    }

    return 0;
}
