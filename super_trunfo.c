#include <stdio.h>

//Desafio Super Trunfo - Países
//Tema 1 - Cadastro das Cartas
//Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de países.
//O programa lê e exibe informações de duas cartas do Super Trunfo de Países.


int main() {
    
    //Variáveis para a carta 1.
    char pais1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
    float valor1;
    float resultado1;

    //Variáveis para a carta 2.
    char pais2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    float valor2;
    float resultado2;

    // Variáveis para guardar as escolhas dos atributos.
    int opcao1;
    int opcao2;

    // Variáveis para armazenar os valores dos atributos para cada carta.
    float valor1_1, valor1_2;
    float valor2_1, valor2_2;

    // Variáveis para o cálculo da soma e resultado.
    float soma1, soma2;
    char* atributo1Nome;
    char* atributo2Nome;

    // Variável para armazenar o vencedor do jogo.
    char* vencedor;

    //Instruções para o usuário.
    printf("Super Trunfo de Países - Cadastro de Cartas\n\n");


    //Cadastro da carta 1.
    printf("Cadastro da Carta 1:\n");
    printf("Digite o país: ");
    scanf("%s", pais1);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área de cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; //PIB convertido de bilhões para reais.

    //Super Poder (soma atributos + inverso da densidade). 
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (area1 / populacao1);


    printf("\n");


    //Cadastro da carta 2.
    printf("Cadastro da Carta 2:\n");
    printf("Digite o país: ");
    scanf("%s", pais2);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área de cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    //Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2= (pib2 * 1000000000.0) / populacao2; //PIB convertido de bilhões para reais.

    //Super Poder (soma atributos + inverso da densidade).
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (area2 / populacao2);


    printf("\n");


    //Exibição dos dados - Carta 1.
    printf("Carta 1:\n");
    printf("País: %s.\n", pais1);
    printf("Número da população: %lu.\n", populacao1);
    printf("Tamanho da área: %.2f Km².\n", area1);
    printf("Número do PIB: %.2f bilhões de reais.\n", pib1);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km².\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais.\n", pibPerCapita1);
    printf("\n");


    //Exibição dos dados - Carta 2.
    printf("Carta 2:\n");
    printf("País: %s.\n", pais2);
    printf("Número da população: %lu.\n", populacao2);
    printf("Tamanho da área: %.2f Km².\n", area2);
    printf("Número do PIB: %.2f bilhões de reais.\n", pib2);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km².\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais.\n", pibPerCapita2);
    printf("\n");


    printf("Cadastro concluído!\n");
    printf("\n");


    // Menu interativo, com lógica de comparação utilizando estrutura de decisão encadeada.
    printf("**** Menu principal ****\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao1);
    

    switch (opcao1)
    {
    case 1:
        valor1_1 = populacao1;
        valor2_1 = populacao2;
        atributo1Nome = "População";
        break;
    case 2:
        valor1_1 = area1;
        valor2_1 = area2;
        atributo1Nome = "Área";
        break;
    case 3:
        valor1_1 = pib1;
        valor2_1 = pib2;
        atributo1Nome = "PIB";
        break;
    case 4:
        valor1_1 = pontosTuristicos1;
        valor2_1 = pontosTuristicos2;
        atributo1Nome = "Pontos Turísticos";
        break;
    case 5:
        valor1_1 = densidadePopulacional1;
        valor2_1 = densidadePopulacional2;
        atributo1Nome = "Densidade demográfica";
        break;
    default:
        printf("Opção inválida! Reinicie o programa.\n");
        return 1;
    }
    

    printf("\nEscolha o 2º atributo para comparação:\n");
    if(opcao1 != 1) printf("1. População.\n");
    if(opcao1 != 2) printf("2. Área.\n");
    if(opcao1 != 3) printf("3. PIB.\n");
    if(opcao1 != 4) printf("4. Número de pontos turísticos.\n");
    if(opcao1 != 5) printf("5. Densidade demográfica.\n");

    printf("Digite o número da opção: ");
    scanf("%d", &opcao2);
    
    // Validação de escolha do mesmo atributo.
    if (opcao1 == opcao2) {
        printf("Opção inválida! Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }


    switch (opcao2)
    {
    case 1:
        valor1_2 = populacao1;
        valor2_2 = populacao2;
        atributo2Nome = "População";
        break;
    case 2:
        valor1_2 = area1;
        valor2_2 = area2;
        atributo2Nome = "Área";
        break;
    case 3:
        valor1_2 = pib1;
        valor2_2 = pib2;
        atributo2Nome = "PIB";
        break;
    case 4:
        valor1_2 = pontosTuristicos1;
        valor2_2 = pontosTuristicos2;
        atributo2Nome = "Pontos Turísticos";
        break;
    case 5:
        valor1_2 = densidadePopulacional1;
        valor2_2 = densidadePopulacional2;
        atributo2Nome = "Densidade demográfica";
        break;
    default:
        printf("Opção inválida! Reinicie o programa.\n");
        return 1;
    }


    // Exibição dos atributos e valores.
    printf("\nComparação entre %s e %s:\n", pais1, pais2);
    printf("Atributo 1: %s\n", atributo1Nome);
    printf("Carta 1 - %s: %.2f\n", pais1, valor1_1 );
    printf("Carta 2 - %s: %.2f\n", pais2, valor2_1 );
    printf("Atributo 2: %s\n", atributo2Nome);
    printf("Carta 1 - %s: %.2f\n", pais1, valor1_2 );
    printf("Carta 2 - %s: %.2f\n", pais2, valor2_2 );


    // Comparação do primeiro atributo com ternário.
    resultado1 = (opcao1 == 5) ? (valor1_1 < valor2_1 ? 1 : (valor1_1 > valor2_1 ? -1 : 0)) : (valor1_1 > valor2_1 ? 1 : (valor1_1 < valor2_1 ? -1 : 0));


    // Comparação do segundo atributo com ternário.
    resultado2 = (opcao2 == 5) ? (valor1_2 < valor2_2 ? 1 : (valor1_2 > valor2_2 ? -1 : 0)) : (valor1_2 > valor2_2 ? 1 : (valor1_2 < valor2_2 ? -1 : 0));


    // Lógica para somar apenas os valores dos atributos comparados.
    soma1 = valor1_1 + valor1_2;
    soma2 = valor2_1 + valor2_2;

    
    printf("\nSoma dos atributos:\n");
    printf("Soma da Carta 1 (%s): %.2f\n", pais1, soma1);
    printf("Soma da Carta 2 (%s): %.2f\n", pais2, soma2);


    // Comparação final da soma.
    vencedor = (soma1 == soma2) ? "Empate!" : (soma1 > soma2 ? pais1 : pais2);


    // Exibição do resultado final.
    printf("\nResultado Final:\n");
    (soma1 == soma2) ? printf("Empate\n") : printf("A carta do país %s venceu a rodada!\n", vencedor);
        
    
    return 0;
}