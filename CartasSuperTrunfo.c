#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da Carta 1
  char estado1;
  char codigo_carta1[4];
  char nome_cidade1[50];
  int populacao1;
  double area1;
  double pib1;
  int pontos_turisticos1;

  // Variáveis da Carta 2
  char estado2;
  char codigo_carta2[4];
  char nome_cidade2[50];
  int populacao2;
  double area2;
  double pib2;
  int pontos_turisticos2;

  // ==========================================
  // Área para entrada de dados - CARTA 1
  // ==========================================
  printf("=== CADASTRO DA CARTA 1 ===\n");

  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o Código da Carta (Ex: A01): ");
  scanf("%3s", codigo_carta1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]s", nome_cidade1); 

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área (em km²): ");
  scanf("%lf", &area1);

  printf("Digite o PIB: ");
  scanf("%lf", &pib1);

  printf("Digite a quantidade de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // ==========================================
  // Área para entrada de dados - CARTA 2
  // ==========================================
  printf("\n=== CADASTRO DA CARTA 2 ===\n");

  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta (Ex: B02): ");
  scanf("%3s", codigo_carta2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]s", nome_cidade2); 

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Área (em km²): ");
  scanf("%lf", &area2);

  printf("Digite o PIB: ");
  scanf("%lf", &pib2);

  printf("Digite a quantidade de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // ==========================================
  // Área para exibição dos dados da cidade
  // ==========================================
  
  // Exibição Carta 1
  printf("\n--- CARTA 1 CADASTRADA ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2lf km²\n", area1);
  printf("PIB: %.2lf\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);

  // Exibição Carta 2
  printf("\n--- CARTA 2 CADASTRADA ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2lf km²\n", area2);
  printf("PIB: %.2lf\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);
// ==========================================
  // Área para entrada de dados - CARTA 2
  // ==========================================
  printf("\n=== CADASTRO DA CARTA 2 ===\n");

  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta (Ex: B02): ");
  scanf("%3s", codigo_carta2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]s", nome_cidade2); 

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Área (em km²): ");
  scanf("%lf", &area2);

  printf("Digite o PIB: ");
  scanf("%lf", &pib2);

  printf("Digite a quantidade de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // ==========================================
  // Área para exibição dos dados da cidade
  // ==========================================
  
  // Exibição Carta 1
  printf("\n--- CARTA 1 CADASTRADA ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2lf km²\n", area1);
  printf("PIB: %.2lf\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);

  // Exibição Carta 2
  printf("\n--- CARTA 2 CADASTRADA ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2lf km²\n", area2);
  printf("PIB: %.2lf\n", pib2);

  printf("Pontos Turísticos: %d\n", pontos_turisticos2);

// ==========================================
// calculo de densidade populacional
  double densidade1 = populacao1 / area1;
  double densidade2 = populacao2 / area2;
// ==========================================
printf("\n--- DENSIDADE POPULACIONAL ---\n");
printf("Densidade da Cidade 1: %.2lf habitantes/km²\n", densidade1);
printf("Densidade da Cidade 2: %.2lf habitantes/km²\n", densidade2);

// ========================================== 
//calculo do pib per capita
  double pib_per_capita1 = pib1 / populacao1;
  double pib_per_capita2 = pib2 / populacao2;

  // ==========================================
printf("\n--- PIB PER CAPITA ---\n");
printf("PIB per capita da Cidade 1: %.2lf\n", pib_per_capita1);
printf("PIB per capita da Cidade 2: %.2lf\n", pib_per_capita2);

// ==========================================
//exibir cartas   
printf("\n--- CARTA 1 ---\n");
printf("Estado: %c\n", estado1);
printf("Código da Carta: %s\n", codigo_carta1); 
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("População: %d\n", populacao1);      
printf("Área: %.2lf km²\n", area1);
printf("PIB: %.2lf\n", pib1);
printf("Pontos Turísticos: %d\n", pontos_turisticos1);
printf("Densidade Populacional: %.2lf habitantes/km²\n", densidade1);
printf("PIB per capita: %.2lf\n", pib_per_capita1);    

printf("\n--- CARTA 2 ---\n");
printf("Estado: %c\n", estado2);
printf("Código da Carta: %s\n", codigo_carta2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);    
printf("Área: %.2lf km²\n", area2);
printf("PIB: %.2lf\n", pib2);
printf("Pontos Turísticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %.2lf habitantes/km²\n", densidade2);
printf("PIB per capita: %.2lf\n", pib_per_capita2);      

  return 0;
}
