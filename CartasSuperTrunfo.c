#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 // Variáveis para o cadastro
    int codigo, num_pontos_turisticos, populacao;
    char nome[50];
    float area, pib;

    // Variáveis para os novos cálculos
    float densidade_populacional, pib_per_capita;

    printf("== Cadastro de Cidades ==\n");

    printf("Digite o Codigo da Cidade: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome);

    printf("Digite a Populacao da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a Area da cidade em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em Bilhoes: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos);

    // Calculo da densidade populacional
    densidade_populacional = populacao / area;

    // Calculo do PIB per Capita
    // Ex.: PIB está em bilhões. Se quisermos PIB per capita em 'bilhões/habitante':
    pib_per_capita = pib / populacao;

    // Se quiser em reais, descomente a linha abaixo e comente a anterior:
    // pib_per_capita = (pib * 1000000000) / populacao;

    printf("\n== Dados da Cidade Cadastrada ==\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);

    // Exibindo as novas propriedades
    printf("\n== Novas Propriedades Calculadas ==\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    // Se estiver usando 'bilhões/habitante':
    printf("PIB per Capita: %.6f bilhões/habitante\n", pib_per_capita);

    // Caso você opte por exibir em reais, altere para algo como:
    // printf("PIB per Capita (em R$): %.2f\n", pib_per_capita);

    return 0;
}