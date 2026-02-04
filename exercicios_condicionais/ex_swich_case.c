#include <stdio.h>

// int main()
// {
//   int dia;

//   printf("Digite um número de 1 a 7: ");
//   scanf("%d", &dia);

//   switch (dia)
//   {
//   case 1:
//     printf("Domingo \n");
//     break;
//   case 2:
//     printf("Segunda \n");
//     break;
//   case 3:
//     printf("Terça \n");
//     break;
//   case 4:
//     printf("Quarta \n");
//     break;
//   case 5:
//     printf("Quinta \n");
//     break;
//   case 6:
//     printf("Sexta \n");
//     break;
//   case 7:
//     printf("Sabado \n");
//     break;

//   default:
//     printf("Invalido!");
//     break;
//   }

//   return 0;
// }

// Exercicio 1:

// int main()
// {
//   int lanche;

//   printf("Digite a opcao de lanche desejada de 1 a 4: ");
//   scanf("%d", &lanche);

//   switch (lanche)
//   {
//   case 1:
//     printf("Hambúrguer");
//     break;
//   case 2:
//     printf("Cachorro-quente");
//     break;
//   case 3:
//     printf("Pizza");
//     break;
//   case 4:
//     printf("Encerrando pedido...");
//     break;

//   default:
//     printf("Opcao invalida!");
//     break;
//   }

//   return 0;
// }

// Exercicio 2:

int main()
{
  int opcao;
  float nota;
  int frequencia;

  printf("Escolha a opcao desejada 1 (Verificar se o aluno foi aprovado) ou 2 (sair): ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Digite a nota final do aluno de 0 a 10: ");
    scanf("%f", &nota);
    printf("Digite a frequencia do aluno de 0 a 100: ");
    scanf("%d", &frequencia);

    if (nota >= 7 && frequencia > 75)
    {
      printf("Aluno aprovado!");
    }
    else
    {
      printf("\n Aluno reprovado!");
    }
    break;
  case 2:
    break;

  default:
    printf("Opcao invalida!");
    break;
  }
  return 0;
}