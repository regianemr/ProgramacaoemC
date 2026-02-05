#include <stdio.h>

int main()
{
  int rodadas = 0;
  int total = 0;
  int moedas;

  while (total < 100)
  {
    printf("Digite a quantidade de moedas: ");
    scanf("%d", &moedas);

    total += moedas;
    rodadas++;
  }

  printf("Meta atingida em %d rodadas. \n", rodadas);

  return 0;
}