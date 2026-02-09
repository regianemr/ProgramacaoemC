#include <stdio.h>

int somar(int numero1, int numero2)
{
  return numero1 + numero2;
}

int main()
{
  printf("Resultado: %d\n", somar(3, 2));
  printf("Resultado: %d\n", somar(14, 2));
  printf("Resultado: %d\n", somar(20, 4));

  return 0;
}