#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Desafio realizado por Jonatas Gomes Machado

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 
     struct Carta {
        char codigo[4];        // Código da carta (ex: A01)
        char nome[30];         // Nome da cidade (sem espaços)
        int populacao;         // População
        float area;            // Área
        float pib;             // PIB
        int pontosTuristicos;  // Número de pontos turísticos
    };

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
  struct Carta carta1;
    struct Carta carta2;

   // Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade (sem espaços): ");
    scanf("%s", carta1.nome);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade (sem espaços): ");
    scanf("%s", carta2.nome);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Nome: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Nome: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
