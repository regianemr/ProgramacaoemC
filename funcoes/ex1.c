#include <stdio.h>

float media(float nota1, float nota2)
{
  return (nota1 + nota2) / 2;
}

int main()
{
  float n1, n2;

  printf("Digite duas notas: \n");
  scanf("%f %f", &n1, &n2);

  printf("Média: %.2f", media(n1, n2));
  return 0;
}