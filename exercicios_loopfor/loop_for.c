#include <stdio.h>

// int main()
// {
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Numero: %d\n", i);
//   }

//   return 0;
// }

// int main()
// {
//   int dias;
//   printf("Digite quantos dias de treinamento: ");
//   scanf("%d", &dias);

//   for (int i = 0; i < dias; i++)
//   {
//     printf("\nDia %d: Ta pago!", i + 1);
//   }

//   return 0;
// }

int main()
{
  printf("Contagem regressiva para uma bomba explodir:\n");

  for (int index = 10; index >= 1; index--)
  {
    printf("%d...\n", index);
  }

  printf("## BOOOM! ##\n");

  return 0;
}