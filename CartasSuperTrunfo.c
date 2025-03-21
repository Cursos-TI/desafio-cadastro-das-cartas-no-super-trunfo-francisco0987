#include <stdio.h>

int main() {

    // declarando as variáveis do jogo
    char estado1;
    char codigo_carta1[4] = "01";
    char nome_cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int n_pontos_turisticos1; // numero de pontos turísticos

    char estado2;
    char codigo_carta2[4]= "02";
    char nome_cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int n_pontos_turisticos2; // numero de pontos turísticos

    printf("SEJA BEM VINDO AO SUPER TRUNFO!\n");
    printf("Nesse jogo você poderar cadastra uma cidade, sua população, aréa em km², PIB, e números de pontos turisticos.\n");

    // Cadastrando dados da carta número 1
    printf("Vamos cadastrar nossa primeira carta.\n");
    printf("Digite a letra do seu estado: \n");
    scanf("%c", &estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao1);

    printf("Área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da cidade: \n\n");
    scanf("%d", &n_pontos_turisticos1);

    // Exibindo dados da carta número 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n",estado1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", n_pontos_turisticos1);


    // Cadastrando dados da carta número 2
    printf("Vamos cadastrar nossa segunda carta.\n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    // OBS: O caracter da letra aparece vazio, não conseguir resolver
    printf("Digite a letra do seu estado: \n");
    scanf("%c", &estado2);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao2);

    printf("Área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &n_pontos_turisticos2);

    // Exibindo dados da carta número 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n",estado2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n\n", n_pontos_turisticos2);

    return 0;
}

