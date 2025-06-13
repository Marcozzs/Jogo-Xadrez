#include <stdio.h>

int main()
{

    // CARTA 1:
    char estado1[20];
    char codigo_da_carta1[6];
    char nome_da_cidade1[50];
    int populacao1;
    float area_em_km1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade1;
    float soma1;

    // CARTA 2:
    char estado2[20];
    char codigo_da_carta2[6];
    char nome_da_cidade2[20];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade2;
    float soma2;

    // CARTA 1:
    printf("Vamos cadastrar a primeira carta!\n");

    printf("Qual a sigla do estado: ");
    fgets(estado1, 20, stdin);

    printf("Qual o código: ");
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

    // CARTA 2:
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

    // RESULTADO FINAL:
    printf("\nCarta 1:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s\n", codigo_da_carta1);
    printf("Nome da Cidade:%s\n", nome_da_cidade1);
    printf("Populacão:%d\n", populacao1);
    printf("Área: %f\n", area_em_km1);
    printf("PIB:%f\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", numero_de_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s\n", codigo_da_carta2);
    printf("Nome da Cidade:%s\n", nome_da_cidade2);
    printf("Populacão:%d\n", populacao2);
    printf("Área: %f\n", area_em_km2);
    printf("PIB:%f\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", numero_de_pontos_turisticos2);



    // Calcular densidade
    densidade1 = populacao1 / area_em_km1;
    densidade2 = populacao2 / area_em_km2;

    int opcao1, opcao2;
    printf("\n** Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);
    
    if (!(opcao1 >= 1 && opcao1 <= 5))
    {
        printf("Opcão Inválida! Somente opções de 1 a 5");
        return 0;
    }
    
    printf("\n ** Agora escolha o segundo atributo:\n");
    printf("\n");

    opcao1 == 1 ? printf("Tente outro, esse já foi escolhido!\n") : printf("1 - População\n");
    opcao1 == 2 ? printf("Tente outro, esse já foi escolhido!\n") : printf("2 - Área\n");
    opcao1 == 3 ? printf("Tente outro, esse já foi escolhido!\n") : printf("3 - PIB\n");
    opcao1 == 4 ? printf("Tente outro, esse já foi escolhido!\n") : printf("4 - Número de Pontos Turísticos\n");
    opcao1 == 5 ? printf("Tente outro, esse já foi escolhido!\n") : printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    if (!(opcao2 >= 1 && opcao2 <= 5))
    {
        printf("Opcão Inválida! Somente opções de 1 a 5");
        return 0;
    }

    printf("\nComparando cidades:\n");
    printf("%s x %s\n", nome_da_cidade1, nome_da_cidade2);
    

    if (opcao1 == 1 || opcao2 == 1)
    {
        printf("\n # Voce escolheu comparar o atributo População:\n");
        printf("População Carta 1: %d x População Carta 2: %d\n", populacao1, populacao2);
         populacao1 > populacao2 ? printf("Parabéns! Quem venceu foi a Carta 1!\n") : printf("Parabéns! Quem venceu foi a Carta 2!\n");
         populacao1 == populacao2 ? printf(" * Empate *\n") : printf(""); 
         soma1 = (float)populacao1;
         soma2 = (float)populacao2;
    }
    if (opcao1 == 2 || opcao2 == 2)
    {
        printf("\n # Voce escolheu comparar o atributo Área por km:\n");
        printf("Área Carta 1: %.4f x Área Carta 2: %.4f\n", area_em_km1, area_em_km2);
        area_em_km1 > area_em_km2 ? printf("Parabéns! Quem venceu foi a Carta 1!\n") : printf("Parabéns! Quem venceu foi a Carta 2!\n");
        area_em_km1 ==  area_em_km2 ? printf(" * Empate *\n") : printf("");
        soma1 = soma1 + area_em_km1;
        soma2 = soma2 + area_em_km2;
        
    }
    if (opcao1 == 3 || opcao2 == 3)
    {
        printf("\n # Voce escolheu comparar o atributo PIB:\n");
        printf("PIB Carta 1: %.f x PIB Carta 2: %.f\n", pib1, pib2);
        pib1 > pib2 ? printf("Parabéns! Quem venceu foi a Carta 1!\n") : printf("Parabéns! Quem venceu foi a Carta 2!\n");
        pib1 == pib2 ? printf(" * Empate *\n") : printf("");
        soma1 = soma1 + pib1;
        soma2 = soma2 + pib2;
    }   
    if (opcao1 == 4 || opcao2 == 4)
    {
        printf("\n # Voce escolheu comparar o atributo Número de Pontos Turísticos:\n");
        printf("Pontos Turísticos Carta 1: %d x Ponto Turístico Carta 2: %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
        numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? printf("Parabéns! Quem venceu foi a Carta 1!\n") : printf("Parabéns! Quem venceu foi a Carta 2!\n");
        numero_de_pontos_turisticos1 == numero_de_pontos_turisticos2 ? printf(" * Empate *\n") : printf("");
        soma1 = soma1 + (float)numero_de_pontos_turisticos1;
        soma2 = soma2 + (float)numero_de_pontos_turisticos2;
    }
    if (opcao1 > 5 || opcao2 == 5)
    {
        printf("\n # Voce escolheu comparar o atributo Densidade Populacional:\n");
        printf("Densidade Populacional Carta 1: %.4f x Densidade Populacional Carta 2: %.4f\n", densidade1, densidade2);
        densidade1 < densidade1 ? printf("Parabéns! Quem venceu foi a Carta 1!\n") : printf("Parabéns! Quem venceu foi a Carta 2!\n");
        densidade1 == densidade2 ? printf(" * Empate *\n") : printf("");
        soma1 = soma1 + densidade1;
        soma2 = soma2 + densidade2;
    }
    printf("\n ~ RESULTADO SOMATÓRIO \n" );
    printf("CARTA 1: %f\n", soma1);
    printf("CARTA 2: %f\n", soma2);

   if (soma1 > soma2)
   {
    printf("Carta 1 venceu a rodada. Parabéns !");
   } else if (soma1 < soma2){
    printf("Carta 2 venceu a rodada. Parabéns !");
   } else {
    printf("Empate entre as cartas !");
   }
    
   return 0;


} 
