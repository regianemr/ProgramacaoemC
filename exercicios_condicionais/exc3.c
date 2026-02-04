#include <stdio.h>

int main()
{
  int tempoMinutos, tempoHoras, minRestantes;

  printf("Digite o tempo jogado em minutos: ");
  scanf("%d", &tempoMinutos);

  tempoHoras = tempoMinutos / 60;
  minRestantes = tempoMinutos % 60;

  printf("O tempo em horas é: %d horas e %d minutos", tempoHoras, minRestantes);

  return 0;
}