#include <stdio.h>

int main()
{
  int numeroSecreto = 7;
  int numero;

  do
  {
    printf("Digite o número secreto entre 1 e 10: ");
    scanf("%d", &numero);
  } while ((numero != numeroSecreto));

  printf("Voce acertou!");

  return 0;
}