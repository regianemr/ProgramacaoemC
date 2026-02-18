#include <stdio.h>
#include <stdlib.h>

int main()
{
  char idadeStr[10];
  int idade;

  printf("Digite sua idade: ");
  scanf("%s", idadeStr);

  idade = atoi(idadeStr);

  printf("Idade convertida: %d\n", idade);

  if (idade >= 18)
  {
    printf("Maior de idade!\n");
  }
  else
  {
    printf("Menor de idade!\n");
  }

  return 0;
}