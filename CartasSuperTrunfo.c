#include <stdio.h>


// Desafio Super Trunfo 
// Tema 2 - medias adicionadas
int main() {
    // Variáveis para o cadastro:
    // - Armazenam dados básicos da cidade.
    int codigo, num_pontos_turisticos, populacao; 
    char nome[50];
    float area, pib;

    // Variáveis para novos cálculos:
    // - Densidade populacional e PIB per Capita.
    float densidade_populacional, pib_per_capita;

    // Início do cadastro de cidades:
    printf("== Cadastro de Cidades ==\n");

    // Entrada do código da cidade:
    // Representa um identificador numérico único.
    printf("Digite o Codigo da Cidade: \n");
    scanf("%d", &codigo);

    // Entrada do nome da cidade:
    // Lê até 49 caracteres, incluindo espaços, antes de encontrar uma nova linha.
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome);

    // Entrada da população:
    // Número inteiro que indica quantos habitantes existem na cidade.
    printf("Digite a Populacao da Cidade: \n");
    scanf("%d", &populacao);

    // Entrada da área:
    // Valor flutuante em quilômetros quadrados (pode conter casas decimais).
    printf("Digite a Area da cidade em Km²: \n");
    scanf("%f", &area);

    // Entrada do PIB:
    // Valor em bilhões, podendo conter casas decimais (armazenado em float).
    printf("Digite o PIB da cidade em Bilhoes: \n");
    scanf("%f", &pib);

    // Entrada do número de pontos turísticos:
    // Representa quantos pontos de interesse a cidade possui.
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos);

    // Cálculo da Densidade Populacional:
    // (população / área)
    densidade_populacional = populacao / area;

    // Cálculo do PIB per Capita:
    // (pib / populacao) assumindo que o PIB é em bilhões.
    pib_per_capita = pib / populacao;

    // Caso deseje exibir o valor em reais, basta descomentar a linha abaixo
    // e comentar a linha acima, multiplicando o PIB por 1.000.000.000:
    // pib_per_capita = (pib * 1000000000) / populacao;

    // Exibição dos dados cadastrados:
    printf("\n== Dados da Cidade Cadastrada ==\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);

    // Exibição das novas propriedades calculadas:
    printf("\n== Novas Propriedades Calculadas ==\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    // PIB per Capita em 'bilhões/habitante':
    printf("PIB per Capita: %.6f bilhões/habitante\n", pib_per_capita);

    // Caso opte por exibir em reais, faça algo como:
    // printf("PIB per Capita (em R$): %.2f\n", pib_per_capita);

    return 0;
}
