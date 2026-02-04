#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("Numeros pares de 1 até %d:\n ", numero);
  for (int i = 1; i <= numero; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i);
    }
  }

  return 0;
}