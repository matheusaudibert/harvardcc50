// Escada do Mario

#include <stdio.h>

int main()
{
  int altura;

  do
  {
    printf("Tamanho: ");
    scanf("%d", &altura);
  } while (altura < 1 || altura > 8);

  for (int i = 1; i <= altura; i++)
  {
    for (int j = 0; j < altura - i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < i; k++)
    {
      printf("#");
    }
    printf("\n");
  }

  return 0;
}