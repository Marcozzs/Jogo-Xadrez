#include <stdio.h>

int main(){

    //CARTA 1:
    char estado1[20];
    char codigo_da_carta1[6];
    char nome_da_cidade1[50];
    unsigned int populacao1;
    float area_em_km1;
    float pib1;
    int numero_de_pontos_turisticos1;

    //CARTA 2:
    char estado2[20];
    char codigo_da_carta2[6];
    char nome_da_cidade2[20];
    unsigned int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;
    

    //CARTA 1:
    printf("Vamos cadastrar a primeira carta!\n");

    printf("Qual a sigla do estado: ", estado1);
    fgets(estado1,20, stdin);

    printf("Qual o código: ", codigo_da_carta1);
    scanf("%s", &codigo_da_carta1);
    getchar();

    printf("Qual o nome da cidade: ", nome_da_cidade1);
    fgets(nome_da_cidade1, 50, stdin);

    printf("Qual é a populacão (sem pontos): ", populacao1);
    scanf("%d", &populacao1);

    printf("Qual a área em km²: ", area_em_km1);
    scanf("%f", &area_em_km1);

    printf("Qual o PIB: ", pib1);
    scanf("%f", &pib1);

    printf("Qual o número de Pontos Turísiticos: ", numero_de_pontos_turisticos1);
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar();

    //OPERACÃO CARTA1 PÓS COLETA;
    float densidade_populacional1 = (float) populacao1/area_em_km1;
    float pib_per_capita1 = (float) (pib1/populacao1) *1000000000;//Foi necessário converter o PIB de bilhões para reais para calcular o PIB per capita.
    float inverso_densidade1 = area_em_km1 / populacao1;
    float super_poder1 = (float) populacao1 + area_em_km1 + pib1 + (float) numero_de_pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;
    

    //CARTA 2:
    printf("\nVamos cadastrar a segunda carta!\n");

    printf("Qual a sigla do estado: ", estado2);
    fgets(estado2, 20, stdin);

    printf("Qual o código: ", codigo_da_carta2);
    scanf("%s", &codigo_da_carta2);
    getchar();

    printf("Qual o nome da cidade: ", nome_da_cidade2);
    fgets(nome_da_cidade2, 20, stdin);

    printf("Qual é a populacão (sem pontos): ", populacao2);
    scanf("%d", &populacao2);

    printf("Qual a área em km²: ", area_em_km2);
    scanf("%f", &area_em_km2);

    printf("Qual o PIB: ", pib2);
    scanf("%f", &pib2);

    printf("Qual o número de Pontos Turísiticos: ", numero_de_pontos_turisticos2);
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar();

    //OPERACÃO CARTA2 PÓS COLETA;
    float densidade_populacional2 = (float) populacao2/area_em_km2;
    float pib_per_capita2 = (float) (pib2/populacao2) *1000000000;//Foi necessário converter o PIB de bilhões para reais para calcular o PIB per capita.
    float inverso_densidade2 = area_em_km2 / populacao2;
    double super_poder2 = (float) populacao2 + area_em_km2 + pib2 + (float) numero_de_pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;


    //RESULTADO FINAL:
    printf("\nCarta 1:\n");
    printf("Estado:%s", estado1);
    printf("Código:%s\n", codigo_da_carta1);
    printf("Nome da Cidade:%s", nome_da_cidade1);
    printf("Populacão:%d\n", populacao1);
    printf("Área:%.2f\n", area_em_km1);
    printf("PIB:%.2f\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional:%.2f\n", densidade_populacional1);
    printf("PIB per Capita:%.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado:%s", estado2);
    printf("Código:%s\n", codigo_da_carta2);
    printf("Nome da Cidade:%s", nome_da_cidade2);
    printf("Populacão:%d\n", populacao2);
    printf("Área: %.2f\n", area_em_km2);
    printf("PIB:%.2f\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita:%.2f\n", pib_per_capita2);
 

    //COMPARACÃO
    int populacao1Maior = populacao1 > populacao2; //se populacao 1 for maior, o resultado é 1. Caso contrário, 0
    int area1Maior = area_em_km1 > area_em_km2;
    int pib1Maior = pib1 > pib2;
    int pontosturisticoslMaior = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2;
    int densidade1Maior = densidade_populacional1 < densidade_populacional2;
    int pibpercapita1Maior = pib_per_capita1 > pib_per_capita2;
    int superpoder1Maior = super_poder1 > super_poder2;

    int printValor = 2; 

    printf("\nCOMPARACAO DAS CARTAS:\n");
    printf("Populacão: Carta %d venceu (%d)\n", printValor-populacao1Maior, populacao1Maior);
    printf("Área: Carta %d venceu (%d)\n", printValor-area1Maior, area1Maior);
    printf("PIB: Carta %d venceu (%d)\n", printValor-pib1Maior, pib1Maior);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", printValor-pontosturisticoslMaior, pontosturisticoslMaior);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", printValor-densidade1Maior, densidade1Maior);
    printf("PIB per Capita: Carta %d venceu (%d)\n", printValor-pibpercapita1Maior, pibpercapita1Maior);
    printf("Super Poder: Carta %d venceu (%d)\n", printValor-superpoder1Maior, superpoder1Maior);
    
    return 0;
}
