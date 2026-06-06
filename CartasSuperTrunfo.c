#include <stdio.h>

int main(){
  char estado[50];
  char codigo_carta[20], nome_cidade[20];
  int populacao;
  int pontos_turisticos;
  float area_km2;
  double PIB, densidade_populacional, PIB_percapita;
  
  printf("Insira o estado: \n");
  scanf("%s", estado);

  printf("Insira o código da carta: \n");
  scanf("%s", codigo_carta);

  printf("Insira o nome da cidade: \n");
  scanf("%s", nome_cidade);

  printf("Insira a quantidade populacional: \n");
  scanf("%d", &populacao);

  printf("Insira o Nº de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);

  printf("Insira a area em km2: \n");
  scanf("%f", &area_km2);

  printf("Insira o PIB: \n");
  scanf("%lf", &PIB);

  printf("Estado: %s - Código da Carta: %s - Nome da cidade: %s \n", estado, codigo_carta, nome_cidade);
  printf("Populacao: %d - Pontos turisticos: %d - Area em Km2: %.2f - PIB: %.2f \n", populacao, pontos_turisticos, area_km2, PIB);

  densidade_populacional = populacao / area_km2;
  PIB_percapita = PIB / populacao;

  printf("Densidade Populacional: %.2lf - PIB per capita: %.2lf \n", densidade_populacional, PIB_percapita);

  return 0;

}
