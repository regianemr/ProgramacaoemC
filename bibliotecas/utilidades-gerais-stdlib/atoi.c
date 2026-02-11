
// atoi(), atof() converte string pra int e float

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char texto[] = "123";
  int valor = atoi(texto);

  printf("Texto convertido: %d\n", valor);

  return 0;
}
