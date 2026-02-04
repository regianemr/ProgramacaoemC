#include <stdio.h>

int main()
{
  int n, par = 2;

  printf("Digite um número N de linhas: ");
  scanf("%d", &n);

  for (int linhas = 1; linhas <= n; linhas++)
  {
    for (int colunas = 1; colunas <= linhas; colunas++)
    {
      printf("%d ", par);
      par += 2;
    }
    printf("\n");
  }

  return 0;
}