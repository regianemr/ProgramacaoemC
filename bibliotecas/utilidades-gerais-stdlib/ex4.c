// Detector de caracteres proibidos

#include <stdio.h>
#include <string.h>

int main()
{
  char nome[50];
  int tamanho, proibidos = 0;

  printf("Digite o nome do usuário: ");
  scanf("%s", nome);

  tamanho = strlen(nome);

  for (int i = 0; i < tamanho; i++)
  {
    char c = nome[i];
    if (c == '@' || c == '#' || c == '$' || c == '%' || c == '!')
    {
      proibidos++;
    }
  }

  if (proibidos > 0)
  {
    printf("Nome inválido! %d caractere(s) proibido(s). \n", proibidos);
  }
  else
  {
    printf("Nome válido!\n");
  }
  return 0;
}
