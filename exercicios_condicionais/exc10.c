#include <stdio.h>

int main()
{
  int capacidadeTotal, torcedores;
  float ocupacao;

  printf("Digite a capacidade total do estadio: ");
  scanf("%d", &capacidadeTotal);

  printf("Digite a quantidade de torcedores: ");
  scanf("%d", &torcedores);

  ocupacao = (float)torcedores * 100 / capacidadeTotal;

  printf("\n======== Resultado ========\n");
  printf("Lotação: %.2f%% \n", ocupacao);

  if (ocupacao > 90)
  {
    printf("Lotado!");
  }
  else if (ocupacao >= 70)
  {
    printf("Otima presenca de publico!");
  }
  else if (ocupacao >= 50)
  {
    printf("Público razoavel.");
  }
  else
  {
    printf("Morumbis");
  }

  return 0;
}