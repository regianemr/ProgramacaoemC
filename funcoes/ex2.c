// contar vogais em uma palavra
// toda string termina com "\0"

#include <stdio.h>

int vogais(char palavra[])
{
  int contador = 0;

  for (int i = 0; palavra[i] != '\0'; i++)
  {
    if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
    {
      contador++;
    }
  }
  return contador;
}

int main()
{
  char palavra[20];

  printf("Digite uma palavra: \n");
  scanf("%s", palavra);

  printf("Quantidade de vogais: %d", vogais(palavra));
  return 0;
}