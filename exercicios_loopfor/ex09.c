#include <stdio.h>

int main()
{
  int totalCarros;
  printf("Digite a quantidade de carros a serem registrados:  ");
  scanf("%d", &totalCarros);

  for (int i = 0; i < totalCarros; i++)
  {
    char modelo[50];
    int ano, funcionamento;

    printf("\nModelo %d: \n", i + 1);
    printf("Nome do modelo: ");
    scanf("%s", modelo);

    printf("Ano de fabricação: ");
    scanf("%d", &ano);

    printf("Está funcionando normalmente ('1' ou '0'): ");
    scanf("%d", &funcionamento);

    if (ano < 2005 && funcionamento == 0)
    {
      printf("O carro %s precisa de reparos urgentes!\n", modelo);
    }
    else if (ano < 2005 && funcionamento == 1)
    {
      printf("O carro %s é antigo, recomenda-se uma revisao!\n", modelo);
    }
    else if (ano >= 2005 && funcionamento == 0)
    {
      printf("O carro %s precisa de manutenção!\n", modelo);
    }
    else
    {
      printf("O carro %s está em boas condições!", modelo);
    }
  }

  return 0;
}