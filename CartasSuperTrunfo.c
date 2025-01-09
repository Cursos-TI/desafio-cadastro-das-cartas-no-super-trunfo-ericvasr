#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//
// Este programa realiza o cadastro de cartas representando cidades,
// coletando informações como código, nome, população, área, PIB
// e número de pontos turísticos. As informações são exibidas ao
// final de forma organizada.

int main() {
    // Definição das variáveis:
    // - Código da cidade, população e número de pontos turísticos são inteiros.
    // - Nome da cidade é uma string com capacidade para até 49 caracteres (mais o '\0').
    // - Área e PIB são valores fracionados, portanto armazenados em float.
    int codigo, num_pontos_turisticos, populacao; 
    char nome[50];
    float area, pib; 

    // Início do cadastro de cidades:
    // O programa solicita que o usuário insira cada informação passo a passo.
    printf("== Cadastro de Cartas Cidades ==\n");

    // Entrada do código da cidade:
    // Representa o identificador numérico único da cidade.
    printf("Digite o Código da Cidade: \n");
    scanf("%d", &codigo);

    // Entrada do nome da cidade:
    // Coletamos o nome completo da cidade; limitamos a leitura a 49 caracteres
    // para evitar sobreposição na memória.
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome); // Lê até encontrar uma nova linha.

    // Entrada da população:
    // Número inteiro indicando quantas pessoas habitam a cidade.
    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao);

    // Entrada da área da cidade:
    // Valor em quilômetros quadrados; pode conter casas decimais.
    printf("Digite a Área da cidade em Km²: \n");
    scanf("%f", &area);

    // Entrada do PIB da cidade:
    // Valor em bilhões, podendo conter casas decimais.
    printf("Digite o PIB da cidade em Bilhões: \n");
    scanf("%f", &pib);

    // Entrada do número de pontos turísticos:
    // Quantidade total de atrações relevantes na cidade.
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos);

    // Exibição dos dados cadastrados:
    // Apresenta todas as informações de forma organizada.
    printf("\n== Dados da Cidade Cadastrada ==\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);

    return 0;
}
