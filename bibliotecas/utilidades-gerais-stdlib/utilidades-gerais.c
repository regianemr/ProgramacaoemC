// stdlib.h
// - rand() numero aleatorio (porem ele grava esse numero na memoria, só podendo gerar uma vez)
// srand() inicializa o gerador com uma semente (podendo gerar vários numeros aleatorios)
// atoi(), atof() converte string pra int e float
// exit() encerra o programa

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int numero = rand() % 100; // numero aleatorio entre 0 e 99

  printf("Numero aleatório: %d\n", numero);

  return 0;
}
