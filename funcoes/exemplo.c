#include <stdio.h>

int parImpar(int numero)
{
  if (numero % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  if (parImpar(num))
  {
    printf("O número é par!");
  }
  else
  {
    printf("O numero é impar!");
  }

  return 0;
}