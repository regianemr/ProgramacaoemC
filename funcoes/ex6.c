// Avaliacao de desempenho entre 5 jogadores

#include <stdio.h>

float calcaularMedia(float n1, float n2, float n3)
{
  return (n1 + n2 + n3) / 3;
}

void classificarMedia(float media)
{
  if (media >= 9)
  {
    printf("Excelente!");
  }
  else if (media >= 7)
    printf("Bom!");
  else if (media >= 5)
    printf("Regular!");
  else
    printf("Ruim!");
}

int main()
{

  float n1, n2, n3, media;
  for (int i = 1; i <= 5; i++)
  {
    printf("Jogador %d:\n", i);
    printf("Digite as tres notas para calcular a media: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = calcaularMedia(n1, n2, n3);
    printf("Media: %.2f - ", media);
    classificarMedia(media);
    printf("\n=================\n\n");
  }

  return 0;
}