// Conversor de temperatura: ler a tem como str, converter para float e informar se esta frio, agradavel ou quente

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char tempStr[10];
  float temperatura;

  printf("Digite a temperatura do ambiente (ex: 23.5): ");
  scanf("%s", tempStr);

  temperatura = atof(tempStr);
  printf("Temperatura convertida: %.2f°C\n", temperatura);

  if (temperatura < 18.0)
    printf("Ambiente está frio.\n");
  else if (temperatura <= 25.0)
    printf("Ambiente está agradável.\n");
  else
    printf("Ambiente está quente!");

  return 0;
}
