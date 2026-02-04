#include <stdio.h>
#include <math.h>

int main()
{
  float salario1, salario2, diferencaSalario;

  printf("Digite o salario do primeiro jogador: ");
  scanf("%f", &salario1);

  printf("Digite o salario do segundo jogador: ");
  scanf("%f", &salario2);

  diferencaSalario = fabs(salario1 - salario2);
  // fabs - numero flutuante absoluto, para o valor não vir negativo.

  printf("A diferenca de salario é de: %.2f", diferencaSalario);

  return 0;
}