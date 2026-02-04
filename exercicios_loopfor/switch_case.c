#include <stdio.h>

// int main()
// {
//   int opcao = 2;

//   switch (opcao)
//   {
//   case 1:
//     printf("Fase numero 1");
//     break;

//   case 2:
//     printf("Fase numero 2");
//     break;

//   case 3:
//     printf("Fase numero 3");
//     break;

//   case 4:
//     printf("Fase numero 4");
//     break;

//   default:
//     printf("Opcao invalida");
//   }
//   return 0;
// }

// Switch case com If e Else:

int main()
{
  char operador;
  float a, b;

  printf("Digite a operacao (+, -, *, /): ");
  scanf("%c", &operador);

  printf("Digite os dois valores: ");
  scanf("%f %f", &a, &b);

  switch (operador)
  {
  case '+':
    printf("%.2f %c %.2f = %.2f", a, operador, b, (a + b));
    break;
  case '-':
    printf("%.2f %c %.2f = %.2f", a, operador, b, (a - b));
    break;
  case '*':
    printf("%.2f %c %.2f = %.2f", a, operador, b, (a * b));
    break;
  case '/':
    if (a != 0 && b != 0)
    {
      printf("%.2f %c %.2f = %.2f", a, operador, b, (a / b));
    }
    else
    {
      printf("Não é possivel fazer uma divisao por zero.");
    }
    break;

  default:
    printf("Operador invalido!");
    break;
  }

  return 0;
}