#include <stdio.h>

int main()
{
  int n;

  printf("Digite um numero para linhas: ");
  scanf("%d", &n);

  for (int linhas = 1; linhas <= n; linhas++)
  {
    for (int colunas = 1; colunas <= linhas; colunas++)
    {
      printf("%d", colunas);
    }
    printf("\n");
  }

  return 0;
}