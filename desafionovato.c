#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

   // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontoturistico1, pontoturistico2;


// Área para entrada de dados

  printf("\n\nCadastro da carta 1:\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Código da carta: ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf("%s", nome1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Números de pontos turísticos: ");
  scanf("%d", &pontoturistico1);


  printf("\n\nCadastro da carta 2:\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Código da carta: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf("%s", nome2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Números de pontos turísticos: ");
  scanf("%d", &pontoturistico2);

   // Área para exibição dos dados da cidade

   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Nome da cidade: %s\n", nome1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Números de pontos turísticos: %d\n", pontoturistico1 );

  //

   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Números de pontos turísticos: %d\n", pontoturistico2);

  return 0;
   }
   