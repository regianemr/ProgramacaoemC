// Fezinha na mega
// 6 números aleatorioa de 01 a 60
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n;
  srand(time(NULL));
  printf("Números sorteados: \n");
  for (int i = 0; i < 6; i++)
  {
    n = rand() % 60 + 1;
    printf("%d ", n);
  }
  return 0;
}