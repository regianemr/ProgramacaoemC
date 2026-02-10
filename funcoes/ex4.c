// Classificar notas de alunos
// aprovado nota >= 6; recuperação nota >=4 e < 6 e reprovado nota < 4;
#include <stdio.h>

void classificarNota(float nota)
{
  if (nota >= 6)
  {
    printf("Aprovado!\n");
  }
  else if (nota >= 4)
  {
    printf("Recuperação!\n");
  }
  else
  {
    printf("Reprovado!\n");
  }
}

int main()
{
  float nota;

  printf("Digite sua nota: ");
  scanf("%f", &nota);

  classificarNota(nota);
  return 0;
}