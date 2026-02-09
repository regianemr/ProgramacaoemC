#include <stdio.h>

void exibirMenu()
{
  printf("----Menu de opções ----\n");
  printf("1 - Ver saldo\n");
  printf("2 - Fazer depósito\n");
  printf("3 - Sacar\n");
  printf("4 - Sair\n");
  printf("===============\n");
}

int main()
{
  exibirMenu();

  int opcao;
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  printf("Você escolheu a opção %d.\n");
  return 0;
}