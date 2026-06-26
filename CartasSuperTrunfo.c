#include <stdio.h>

int main(){     //Definição das variáveis com os atributos de cada carta
  char estado1[50], estado2[50];
  char codigo_carta1[20], nome_cidade1[20], codigo_carta2[20], nome_cidade2[20];
  unsigned long int populacao1, populacao2;
  int pontos_turisticos1, pontos_turisticos2, opcao;
  float area_km21, area_km22;
  double superPoderC1, superPoderC2;
  double PIB1, densidade_populacional1, PIB_percapita1, PIB2, densidade_populacional2, PIB_percapita2;
  int atributo1, atributo2;
  double somaCarta1 = 0;
  double somaCarta2 = 0;


  //Abaixo os mecanismos de entrada e saída para cadastro dos dados das cartas
  printf("Insira o primeiro estado: \n");
  scanf("%s", estado1);

  printf("Insira o segundo estado: \n");
  scanf("%s", estado2);

  printf("Insira o codigo da primeira carta: \n");
  scanf("%s", codigo_carta1);

  printf("Insira o codigo da segunda carta: \n");
  scanf("%s", codigo_carta2);

  printf("Insira o nome da primeira cidade: \n");
  scanf("%s", nome_cidade1);

  printf("Insira o nome da segunda cidade: \n");
  scanf("%s", nome_cidade2);

  printf("Insira a quantidade populacional 1: \n");
  scanf("%lu", &populacao1);

  printf("Insira a quantidade populacional 2: \n");
  scanf("%lu", &populacao2);

  printf("Insira o Nº de pontos turisticos da carta 1: \n");
  scanf("%d", &pontos_turisticos1);

  printf("Insira o Nº de pontos turisticos da carta 2: \n");
  scanf("%d", &pontos_turisticos2);

  printf("Insira a area em km2 da carta 1: \n");
  scanf("%f", &area_km21);

  printf("Insira a area em km2 da carta 2: \n");
  scanf("%f", &area_km22);

  printf("Insira o primeiro PIB: \n");
  scanf("%lf", &PIB1);
  
  printf("Insira o segundo PIB: \n");
  scanf("%lf", &PIB2);

  printf("*** Dados da Carta 1 ***\n"); // Banner introdutório + Exibição dos dados da primeira carta
  printf("Primeiro Estado: %s - Codigo da Primeira Carta: %s - Nome da Primeira cidade: %s \n", estado1, codigo_carta1, nome_cidade1);
  printf("Populacao 1: %lu - Pontos turisticos da cidade 1: %d - Area em Km2 da cidade 1: %.2f - PIB 1: %.2lf \n", populacao1, pontos_turisticos1, area_km21, PIB1);

  //Define os valores de densidade populacional e PIB per capita da carta 1 a partir dos valores inseridos pelo usuário
  densidade_populacional1 = populacao1 / area_km21;
  PIB_percapita1 = PIB1 / populacao1;

  //Exibe os dados finais da densidade populacional e PIB percapita da carta 1
  printf("Densidade Populacional 1: %.2lf - PIB per capita 1: %.2lf \n", densidade_populacional1, PIB_percapita1);

  //Define o super poder da carta 1, somando seus atributos
  superPoderC1 = populacao1 + pontos_turisticos1 + area_km21 + PIB1 + PIB_percapita1 + (1.0 / densidade_populacional1);

  //Exibe o super poder da carta 1
  printf("Super Poder da Carta 1: %.2lf\n", superPoderC1);

  printf("*** Dados da Carta 2 ***\n"); // Banner introdutório + Exibição dos dados da segunda carta
  printf("Segundo Estado: %s - Codigo da Segunda Carta: %s - Nome da Segunda cidade: %s \n", estado2, codigo_carta2, nome_cidade2);
  printf("Populacao 2: %lu - Pontos turisticos da cidade 2: %d - Area em Km2 da cidade 2: %.2f - PIB 2: %.2lf \n", populacao2, pontos_turisticos2, area_km22, PIB2);

  //Define os valores de densidade populacional e PIB per capita da carta 2 a partir dos valores inseridos pelo usuário
  densidade_populacional2 = populacao2 / area_km22;
  PIB_percapita2 = PIB2 / populacao2;

  //Exibe os dados finais da densidade populacional e PIB percapita da carta 1
  printf("Densidade Populacional 2: %.2lf - PIB per capita 2: %.2lf \n", densidade_populacional2, PIB_percapita2);

  //Define o super poder da carta 2, somando seus atributos
  superPoderC2 = populacao2 + pontos_turisticos2 + area_km22 + PIB2 + PIB_percapita2 + (1.0 / densidade_populacional2);

  //Exibe o super poder da carta 1
  printf("Super Poder da Carta 2: %.2lf\n", superPoderC2);

  //Abaixo segue a lógica de comparação dos atributos, usando SWITCH, que vale ser comentada em detalhes!

  printf("*** Resultados da Disputa ***\n");

  printf("Escolha o atributo:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Populacional\n");
  scanf("%d", &opcao);

switch(opcao)
{
  case 1:

    if(populacao1 > populacao2)
    {
        printf("Carta 1 venceu!\n");
    }
    else if(populacao2 > populacao1)
    {
        printf("Carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    break;
  case 2:

    if(area_km21 > area_km22)
    {
        printf("Carta 1 venceu!\n");
    }
    else if(area_km22 > area_km21)
    {
        printf("Carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    break;
      case 3:

    if(PIB1 > PIB2)
    {
        printf("Carta 1 venceu!\n");
    }
    else if(PIB2 > PIB1)
    {
        printf("Carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    break;
      case 4:

    if(pontos_turisticos1 > pontos_turisticos2)
    {
        printf("Carta 1 venceu!\n");
    }
    else if(pontos_turisticos2 > pontos_turisticos1)
    {
        printf("Carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    break;
        case 5:

    if(densidade_populacional1 < densidade_populacional2)
    {
        printf("Carta 1 venceu!\n");
    }
    else if(densidade_populacional2 < densidade_populacional1)
    {
        printf("Carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    break;
}

    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo:\n");

switch (atributo1)
{
    case 1:
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        break;

    case 2:
        printf("1 - Populacao\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        break;

    case 3:
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        break;

    case 4:
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Populacional\n");
        break;

    case 5:
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        break;

    default:
        printf("Opcao invalida!\n");
}

scanf("%d", &atributo2);

if (atributo1 == atributo2)
{
    printf("Voce nao pode escolher o mesmo atributo!\n");
    return 0;
}

switch (atributo1)
{
case 1:

    somaCarta1 += populacao1;
    somaCarta2 += populacao2;

    break;

case 2:

    somaCarta1 += area_km21;
    somaCarta2 += area_km22;

    break;

case 3:

    somaCarta1 += PIB1;
    somaCarta2 += PIB2;

    break;

case 4:

    somaCarta1 += pontos_turisticos1;
    somaCarta2 += pontos_turisticos2;

    break;

case 5:

    somaCarta1 += densidade_populacional1;
    somaCarta2 += densidade_populacional2;

    break;
}

switch (atributo2)
{
case 1:

    somaCarta1 += populacao1;
    somaCarta2 += populacao2;

    break;

case 2:

    somaCarta1 += area_km21;
    somaCarta2 += area_km22;

    break;

case 3:

    somaCarta1 += PIB1;
    somaCarta2 += PIB2;

    break;

case 4:

    somaCarta1 += pontos_turisticos1;
    somaCarta2 += pontos_turisticos2;

    break;

case 5:

    somaCarta1 += densidade_populacional1;
    somaCarta2 += densidade_populacional2;

    break;
}

printf("\nSoma Carta 1: %.2lf\n", somaCarta1);
printf("Soma Carta 2: %.2lf\n", somaCarta2);

if (somaCarta1 > somaCarta2)
{
    printf("Carta 1 venceu!\n");
}
else if (somaCarta2 > somaCarta1)
{
    printf("Carta 2 venceu!\n");
}
else
{
    printf("Empate!\n");
}

  return 0;

}
