// Desafio Super Trunfo - Países
// Nível Novato - Cadastro de duas cartas com atributos de cidades
// Autor: [Seu Nome]
// Descrição: Este programa em C cadastra duas cartas do jogo Super Trunfo, tema "Países",
// permitindo ao usuário inserir os dados de duas cidades e exibir essas informações formatadas.

// Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>

// Função principal do programa
int main() {
    // Declaração das variáveis da Carta 1
    // Cada variável representa um atributo da cidade
    char codigo1[4];               // Código da carta, ex: A01
    char nome1[50];                // Nome da cidade
    char estado1;                  // Letra do estado (A a H)
    int populacao1;                // Número de habitantes
    int pontosTuristicos1;         // Quantidade de pontos turísticos
    float area1;                   // Área da cidade em km²
    float pib1;                    // PIB da cidade em bilhões de reais

    // Declaração das variáveis da Carta 2
    char codigo2[4];
    char nome2[50];
    char estado2;
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

    // ==== Cadastro da Carta 1 ====
    printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1); // Lê o caractere do estado (com espaço antes para ignorar enter pendente)

    printf("Digite o Código da Cidade (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da cidade como string

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê o nome completo com espaços até a quebra de linha

    printf("Digite a População: ");
    scanf("%d", &populacao1); // Lê o número de habitantes

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1); // Lê a área em float

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1); // Lê o PIB da cidade

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos


    // ==== Cadastro da Carta 2 ====
    printf("\nCadastro da Carta 2:\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Cidade (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // ==== Exibição dos dados da Carta 1 ====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    // ==== Exibição dos dados da Carta 2 ====
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Fim do programa
    return 0;
}

