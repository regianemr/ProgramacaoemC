#include <stdio.h>

int main()
{
  char nome[10];
  int idade;
  int quantidadeGols;

  printf("Digite seu primeiro nome: ");
  scanf("%s", &nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite quantidade de gols: ");
  scanf("%d", &quantidadeGols);
  printf("===================\n");
  printf("Primeiro nome: %s \n", nome);
  printf("Idade: %d \n", idade);
  printf("Quantidade de gols: %d \n", quantidadeGols);

  return 0;
}
