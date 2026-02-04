#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número para a altura do triangulo: ");
  scanf("%d", &numero);

  for (int altura = 1; altura <= numero; altura++)
  { // loop para quantidade de espaços
    for (int largura = 1; largura <= numero - altura; largura++)
    {
      printf(" ");
    }

    for (int largura = 1; largura <= 2 * altura - 1; largura++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}