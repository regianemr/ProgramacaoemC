// string.h - manipulação de strings
// strlen() - tamanho da string
// strcpy() - copia uma string
// strcmp() - compara strings
// strcat() - concatena strings

#include <stdio.h>
#include <string.h>

int main()
{
  char nome[50] = "Regiane";
  char sobrenome[] = " Melo";

  strcat(nome, sobrenome);
  printf("Nome completo: %s\n", nome);
  printf("Tamanho: %d\n", strlen(nome));

  if (strcmp(nome, "Regiane Melo") == 0)
  {
    printf("Nome correto!\n");
  }
  else
  {
    printf("Nome incorreto!\n");
  }

  return 0;
}
