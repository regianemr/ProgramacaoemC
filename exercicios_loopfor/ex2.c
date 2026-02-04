// Soma dos numeros de 1 a n

#include <stdio.h>

int main()
{
  int numero, soma = 0;

  printf("Digite um número: ");
  scanf("%d", &numero);

  for (int i = 1; i <= numero; i++)
  {
    soma += i;
  }

  printf("A soma de 1 ate %d é: %d", numero, soma);
  return 0;
}