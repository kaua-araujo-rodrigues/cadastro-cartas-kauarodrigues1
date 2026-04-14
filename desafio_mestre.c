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

   // ===============================
   // Cálculo das propriedades
   // ===============================

   float densidade1 = populacao1 / area1;
   float densidade2 = populacao2 / area2;
   float pibpercapital1 = pib1 / populacao1;
   float pibpercapital2 = pib2 / populacao2;

   // Exibição das propriedades calculadas

   printf("\nDensidade populacional da carta 1: %.2f habitantes por km²\n", densidade1);
   printf("\nDensidade populacional da carta 2: %.2f habitantes por km²\n", densidade2);
   printf("\nPIB per capita da carta 1: %.4f\n", pibpercapital1);
   printf("\nPIB per capita da carta 2: %.4f\n", pibpercapital2);
 

   // Cálculo do Super Poder

   double superPoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapital1;
   double superPoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapital2;

   printf("\nSuper Poder da carta 1: %.4f\n", superPoder1);
   printf("\nSuper Poder da carta 2: %.4f\n", superPoder2);
  
   printf("\nComparação entre as cartas:\n");

   // Comparação entre variáveis 

   printf("\n=== Comparação entre as cartas ===\n");

  // População
   printf("População - Carta 1 venceu? %d\n", populacao1 > populacao2);
   printf("População - Carta 2 venceu? %d\n", populacao2 > populacao1);
   printf("População - Empate? %d\n\n", populacao1 == populacao2);

  // Área
  printf("Área - Carta 1 venceu? %d\n", area1 > area2);
  printf("Área - Carta 2 venceu? %d\n", area2 > area1);
  printf("Área - Empate? %d\n\n", area1 == area2);

  // PIB
  printf("PIB - Carta 1 venceu? %d\n", pib1 > pib2);
  printf("PIB - Carta 2 venceu? %d\n", pib2 > pib1);
  printf("PIB - Empate? %d\n\n", pib1 == pib2);

  // Pontos Turísticos
  printf("Pontos Turísticos - Carta 1 venceu? %d\n", pontoturistico1 > pontoturistico2);
  printf("Pontos Turísticos - Carta 2 venceu? %d\n", pontoturistico2 > pontoturistico1);
  printf("Pontos Turísticos - Empate? %d\n\n", pontoturistico1 == pontoturistico2);

  // Densidade Populacional (menor vence)
  printf("Densidade Populacional - Carta 1 venceu? %d\n", densidade1 < densidade2);
  printf("Densidade Populacional - Carta 2 venceu? %d\n", densidade2 < densidade1);
  printf("Densidade Populacional - Empate? %d\n\n", densidade1 == densidade2);

  // PIB per Capita
  printf("PIB per Capita - Carta 1 venceu? %d\n", pibpercapital1 > pibpercapital2);
  printf("PIB per Capita - Carta 2 venceu? %d\n", pibpercapital2 > pibpercapital1);
  printf("PIB per Capita - Empate? %d\n\n", pibpercapital1 == pibpercapital2);

  // Super Poder
  printf("Super Poder - Carta 1 venceu? %d\n", superPoder1 > superPoder2);
  printf("Super Poder - Carta 2 venceu? %d\n", superPoder2 > superPoder1);
  printf("Super Poder - Empate? %d\n", superPoder1 == superPoder2);
   


  return 0;
   }
   