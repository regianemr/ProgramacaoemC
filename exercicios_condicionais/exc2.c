#include <stdio.h>

int main()
{
  int numeroGols;
  int quantidadePartidas;
  float media;

  printf("Digite o número de gols: ");
  scanf("%d", &numeroGols);
  printf("Quantidade de partidas jogadas: ");
  scanf("%d", &quantidadePartidas);

  media = (float)numeroGols / quantidadePartidas;

  printf("A media de gols por partida é: %.2f \n", media);

  return 0;
}