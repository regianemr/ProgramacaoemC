#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número para o tamanho do quadrado: ");
  scanf("%d", &numero);

  for (int linhas = 0; linhas < numero; linhas++)
  {
    for (int colunas = 0; colunas < numero; colunas++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}