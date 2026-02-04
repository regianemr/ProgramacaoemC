#include <stdio.h>

int main()
{
  int numVitorias, numEmpates, numDerrotas, pontos;

  printf("Digite o numero de vitorias: ");
  scanf("%d", &numVitorias);

  printf("Digite o numero de empates: ");
  scanf("%d", &numEmpates);

  printf("Digite o numero de derrotas: ");
  scanf("%d", &numDerrotas);

  pontos = (numVitorias * 3) + numEmpates;

  printf("Total de pontos: %d", pontos);

  return 0;
}