// Determine quanto tempo leva para uma população atingir um determinado tamanho.

#include <stdio.h>

int main()
{

  int fim;
  int anos = 0;
  int populacao;
  int perdas;
  int ganhos;

  do
  {
    printf("Início: ");
    scanf("%d", &populacao);
  } while (populacao < 9);

  do
  {
    printf("Fim: ");
    scanf("%d", &fim);
  } while (fim < populacao);

  while (populacao < fim)
  {
    ganhos = populacao / 3;
    perdas = populacao / 4;
    populacao = populacao + ganhos - perdas;
    anos++;
  }

  printf("Anos: %d", anos);
}